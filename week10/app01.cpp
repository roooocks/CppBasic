#include <iostream>
#include <string>

#include <cstring>

using namespace std;

int main()
{
	// string이 지금은 빨라도, 코드가 많거나 데이터가 많아질수록 느려진다.
	// 내부에서 동적 할당을 계속 해줘서 그런거다. (오버헤드 발생)
	char a[] = "ACE";
	char b[] = "ACE";
	string c = "ACE";
	string d = "ACE";

	cout << strcmp(a, b) << endl; // 0(똑같음) / -1, 1(두 문자열이 다를 때)
	cout << (c == d) << endl; // 1(true), 0(false)

	// a = "XYZ" // error
	c = "XYZ!"; // success

	cout << c << endl;

	return 0;
}