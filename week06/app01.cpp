#include <iostream>
using namespace std;

// stack memory : parameters, local variables
// static(data) memory : global object, static object
// heap memory : dynamic memory allocation (allocate at running time)
//  - 값에 접근하기 위해서는 포인터 변수를 사용한다.
//  - 이때 포인터 변수가 사용하는 주소는 Data(Stack) 것을 사용한다.

class Circle
{
private:
    double radius;
    static int count; // 정적 객체 변수. 초기화는 클래스 밖에서 진행

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

void test() {
    cout << "Circle6";
    Circle circle6(2.0);
    cout << "test 함수 실행 후 마지막은 " << Circle::getCount() << "개" << endl;

    Circle* circle7 = new Circle(circle6); // allocate heap memory
    cout << "Circle7 " << Circle::getCount() << "개" << endl;
    delete circle7; // free heap memory
    cout << "Circle7 " << Circle::getCount() << "개" << endl;
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

    test();
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