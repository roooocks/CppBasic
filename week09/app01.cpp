#include <iostream>
#include <cstring>

using namespace std;

int main() {
	// 01. 문자열 기초
	//char s1[] = {'A', 'B', 'C', 'D', 'E', '\0'};
	//char s1[] = {'A', 'B', 'C', 'D', 'E', NULL};
	//char s1[] = {'A', 'B', 'C', 'D', 'E', 0};
	//char s1[] = { 'A', 'B', 'C', 'D', 'E', };
	//char s1[] = "ABCDE";
	
	char s1[] = {'A', 'B', 'C', NULL, 'E'}; // E는 출력 X
	cout << s1 << endl;

	return 0;
}