#include <iostream>
#include <cstring>

using namespace std;

size_t myStrlen(const char* text) {
	// strlen(text) << 이거 직접 만들어보기
	int count = 0;

	// '\0', 0, NULL << 이건 맘대로
	// 실제로 NULL을 넣어도 인식이 되어 잘 카운트한다.
	while (text[count] != '\0') {
		count += 1;
	}

	return count;
}

int main() {
	// 01. 문자열 기초
	//cout << "01. 문자열 기초" << endl;
	////char s1[] = {'A', 'B', 'C', 'D', 'E', '\0'};
	////char s1[] = {'A', 'B', 'C', 'D', 'E', NULL};
	////char s1[] = {'A', 'B', 'C', 'D', 'E', 0};
	////char s1[] = { 'A', 'B', 'C', 'D', 'E', };
	////char s1[] = "ABCDE";
	//
	//char s1[] = {'A', 'B', 'C', NULL, 'E'}; // E는 출력 X
	////const char s1[] = { 'A', 'B', 'C', NULL, 'E' }; // read-only
	//cout << s1 << endl;
	////s1[3] = 'D'; // NULL을 바꾼거라 문제 발생
	//cout << s1 << endl << endl;

	// 02. 문자열과 포인터
	//cout << "02. 문자열과 포인터" << endl;
	//char* ps1 = s1; // &s1[0]도 가능하다.
	//cout << *ps1 << endl;
	//cout << ps1 << endl;
	//cout << *s1 << endl;
	//cout << s1[1] << endl;
	//cout << *(ps1 + 1) << endl;
	////*(ps1 + 2) = 'Z'; // +1 자체가 자동으로 바이트 수만큼 이동한다.
	//ps1[2] = 'Z';
	//cout << s1 << endl;

	// 03. 문자열에서의 const와 리터럴
	//cout << "03. 문자열에서의 const와 리터럴" << endl;
	//char s1[] = "ACE"; // array compact initializer
	////char* ps1 = "ACE"; // error
	//const char* ps1 = "ACE"; // string literal

	//cout << s1 << endl;
	//cout << ps1 << endl;

	// 04. 문자열과 길이
	cout << "04. 문자열과 길이" << endl;
	char s1[] = "ACE";
	const char* ps1 = "ACE";

	//cout << strlen(s1) << endl;
	cout << myStrlen(s1) << endl; // or &s1[0] 사용
	//cout << strlen(ps1) << endl;
	cout << myStrlen(ps1) << endl; // int myStrlen(const char* text); 사용

	return 0;
}