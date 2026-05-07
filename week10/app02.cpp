#include <iostream>
#include <cstring>

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
	cout << "05. custom comparing(strcmp, strncmp)" << endl;
	const char* s1 = "Hi Daelim";
	const char* s2 = "Hi Daeli";

	cout << strcmp(s1, s2) << endl;
	//cout << strncmp(s1, s2, 2) << endl;
	cout << myStrcmp(s1, s2) << endl;

	return 0;
}