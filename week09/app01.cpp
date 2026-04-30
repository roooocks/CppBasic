#include <iostream>
#include <cstring>

using namespace std;

int main() {
	// 01. 문자열 기초
	cout << "01. 문자열 기초" << endl;
	//char s1[] = {'A', 'B', 'C', 'D', 'E', '\0'};
	//char s1[] = {'A', 'B', 'C', 'D', 'E', NULL};
	//char s1[] = {'A', 'B', 'C', 'D', 'E', 0};
	//char s1[] = { 'A', 'B', 'C', 'D', 'E', };
	//char s1[] = "ABCDE";
	
	char s1[] = {'A', 'B', 'C', NULL, 'E'}; // E는 출력 X
	//const char s1[] = { 'A', 'B', 'C', NULL, 'E' }; // read-only
	cout << s1 << endl;
	//s1[3] = 'D'; // NULL을 바꾼거라 문제 발생
	cout << s1 << endl << endl;

	// 02. 문자열과 포인터
	cout << "02. 문자열과 포인터" << endl;
	char* ps1 = s1;
	cout << *ps1 << endl;
	cout << ps1 << endl;
	cout << *s1 << endl;
	cout << s1[1] << endl;
	cout << *(ps1 + 1) << endl;
	//*(ps1 + 2) = 'Z'; // +1 자체가 자동으로 바이트 수만큼 이동한다.
	ps1[2] = 'Z';
	cout << s1 << endl;

	return 0;
}