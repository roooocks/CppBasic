#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int myStrcmp(const char* a, const char* b)
{
	int i = 0;

	// 하나라도 \0이 오면 끝이다.
	// 길이가 다르니 이런 비교가 필수다.
	while (a[i] != '\0' && b[i] != '\0') {
		if (a[i] != b[i]) {
			return (a[i] - b[i]) > 0 ? 1 : -1; // 앞 문자가 작으면 음수, 크면 양수
		}
		i++;
	}

	if (a[i] < b[i]) {
		return -1;
	}
	else if (a[i] > b[i]) {
		return 1;
	}
	else {
		return 0; // a[i] - b[i] 해도 된다.
	}
}

int main()
{
	//cout << "05. custom comparing(strcmp, strncmp)" << endl;
	//const char* s1 = "Hi Daelim";
	//const char* s2 = "Hi Daeli";

	//cout << strcmp(s1, s2) << endl;
	////cout << strncmp(s1, s2, 2) << endl;
	//cout << myStrcmp(s1, s2) << endl;


	cout << "06. string is size, capacity" << endl;
	// string s1; // string s1("ABC") 직접 초기화로도 사용 가능
	// string s1(5, 'x'); // x를 5개 사용
	string s1("ABC", 2); // 값 2개만 사용

	// s1 = "ABC"; // 복사 초기화(연산자 오버로딩으로 생성자를 호출하도록 바꿔버린 방식)
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.capacity() << endl;
	s1 = "defghijk";
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.capacity() << endl;
	s1 = "123456789012345";
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.capacity() << endl;

	// 여기서부터는 capacity값이 바뀐다.
	// 계속 15였다가 31이 된다. OS마다 그리고 컴파일러마다 달라진다.
	// 16 32 64... 처럼 해당 값에 걸리면 동적 재할당(다음 값으로 넘어감)한다. 이유는 당연히 '\0' 때문이다.
	// 다만 기본은 16으로 본다. 자주 쓰기 때문이며, 15 + 1로 보면 편하다.
	s1 = "1234567890123456";
	cout << s1 << "/" << s1.size() << endl;
	cout << s1 << "/" << s1.capacity() << endl;


	return 0;
}