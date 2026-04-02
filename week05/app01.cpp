#include <iostream>
using namespace std;

// heap memory : dynamic memory allocation
// runtime : 프로그램이 실행되는 동안

int main()
{
	int people = 0;
	int age, totalPrice = 0;
	int *ages = NULL; // NULL 넣긴 했는데, 사실 &age 같은걸 넣어서 주소를 받아야 한다. &는 엔퍼센트라고 한다.

	cout << "인원: ";
	cin >> people;

	ages = new int[people]; // 동적 할당, heap memory
	// 주소는 언제나 다르다. 같으면 큰일남;;
	//cout << ages << endl;
	//cout << ages + 1 << endl;
	//cout << &people << endl;
	//cout << &ages << endl;

	for (int i = 0; i < people; i++) {
		cout << "나이? ";
		cin >> age;

		// ages[i] = age;
		*(ages + i) = age; // 주소가 4byte씩 이동한다. void 포인터는 뭐든 받을 수 있어서 내가 타입을 알려야한다.
	}

	int kid = 5000, audit = 10000, senior = 7000;
	for (int i = 0; i < people; i++) {
		age = *(ages + i); // 귀찮으면 ages[i] 쓰자

		if (age >= 65) {
			totalPrice = totalPrice + senior;
		}
		else if (age >= 20) {
			totalPrice = totalPrice + audit;
		}
		else {
			totalPrice = totalPrice + kid;
		}
	}
	cout << "총 요금: " << totalPrice << endl;

	//cout << "\n출력" << endl;
	//for (int i = 0; i < people; i++) {
	//	//cout << ages[i] << endl;
	//	cout << *(ages + i) << endl;
	//}

	// 보통 프로그램 종료되면 해제가 알아서 된다는건 알고 있었을 것이다.
	// 근데 그걸 자동으로 해주는 친구가 컴파일러가 아니라 OS였다;;
	delete[] ages; // 할당한 메모리 해제(메모리 누수(leak) 방지)

	return 0;
}