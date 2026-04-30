#include <iostream>
using namespace std;

// stack memory : parameters, local variables
// // heap memory : dynamic memory allocation (allocate at running time)
//  - 값에 접근하기 위해서는 포인터 변수로 힙메모리에 할당된 객체를 가리켜 사용한다.
// static(data) memory : global object, static object
//  - BSS: 초기화되지 않은 전역 변수와 정적(static) 변수가 저장되는 곳 (보통 데이터 영역의 일부로 취급하기도 함).
//  - 데이터 (Data): 초기화된 전역 변수와 정적(static) 변수가 저장되는 곳
// 코드 : 작성한 소스코드가 기계어로 변환되어 저장되는 곳 (읽기 전용).

class Circle
{
private:
    double radius;
    static int count; // static object

public:
    // constructor
    Circle() {
        cout << this << "원 객체 생성(기본 생성자)\n";
        radius = 0.0;
        count++;
    }

    Circle(double r) {
        cout << this << "원 객체 생성(매개변수 생성자)\n";
        radius = r;
        count++;
    }

    Circle(const Circle& circle) : radius(circle.radius) {
        cout << this << "원 객체 생성(복사 생성자)\n";

        // getRadius()도 사용 가능하지만 함수라 호출을 한번 하게 되고, 변수는 즉시(보통 캐시 메모리에 있음) 가져온다.
        // radius = circle.radius;
        count++;
    }

    ~Circle() {
        cout << "메모리 해제 직전은 " << Circle::getCount() << "개" << endl;
        count--;
    }

    // inline member function
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
    static int getCount();
};

int Circle::count = 0;
int Circle::getCount() {
    return count;
}

Circle circle5; // global object

// 원래는 void였다.
Circle* test() {
    cout << "Circle6";
    Circle circle6(2.0);
    cout << "test 함수 실행 후 마지막은 " << Circle::getCount() << "개" << endl;

    // 동적 객체(지역 포인터 변수)
    // allocate heap memory, circle7이 해제되는거지 new Circle은 delete 안해주면 해제 안된다.
    // 위의 특징 때문에, 함수가 끝나도 해제가 안되고 그렇기 때문에 return으로 반환해서 주소를 전달하는게 가능한 것이다.
    Circle* circle7 = new Circle(circle6);
    cout << "Circle7 " << Circle::getCount() << "개" << endl;
    cout << circle6.getRadius() << endl;
    // circle7.getRadius() << 이거 객체가 아니라 지역 (포인터) 변수일 뿐이다.
    cout << circle7->getRadius() << endl; // 간접 참조. 이게 싫으면 (*circle7).getRadius()
    // 일반 객체는 . (직접 멤버 연산자)를, 포인터 객체는 -> (간접 멤버 연산자)를 사용
    // delete circle7; // free heap memory, OS 단에서 메모리 누수한거 알아서 지워줘서 그런거지 안그런 OS에선 아예 안없어진다.
    cout << "Circle7 " << Circle::getCount() << "개" << endl;

    return circle7;
}

// getRadius 멤버 함수의 정의
double Circle::getRadius() const
{
    return radius;
}
// getArea 멤버 함수의 정의
double Circle::getArea() const
{
    const double PI = 3.14;
    return (PI * radius * radius);
}
// getPerimeter 멤버 함수의 정의
double Circle::getPerimeter() const
{
    const double PI = 3.14;
    return (2 * PI * radius);
}
// setRadius 멤버 함수의 정의
void Circle::setRadius(double value)
{
    radius = value;
}

int main()
{
    cout << "첫 시작은" << Circle::getCount() << "개" << endl;

    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 1 이후는 " << Circle::getCount() << "개" << endl;

    Circle* circle7 = test();
    cout << "리턴받은 포인터 주소: " << circle7->getRadius() << endl;
    delete circle7; // 힙메모리에 할당된 객체 삭제

    // 댕글링 포인터(dangling pointer) 문제 방지
    // 포인터는 그대로 남아있고 이 포인터가 가리킨 주소값(해제해서 없는 쓰레기 값)을 들고 있다.
    // 이걸 0으로(비유적인 표현이며, 사실상 아무것도 안가리키는 형태로 바꾸는 것) 바꿔준다.
    circle7 = nullptr;

    cout << "전역함수 test() 이후는 " << Circle::getCount() << "개" << endl;

    // 두 번째 circle 객체를 만들고 멤버 함수 호출  
    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << endl << endl;

    Circle circle3(5.0);

    Circle circle4(circle2);
    cout << "반지름: " << circle4.getRadius() << endl;

    // cout << Circle::getCount() << "개" << endl; // 여기서 사용하는 getCount는 Circle클래스 멤버함수로 인스턴스 변수로 사용 가능
    cout << circle3.getCount() << "개" << endl;; // 단 객체가 죽으면 사용 불가


    return 0;
}