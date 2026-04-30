#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // 01. 공식 예제
    // 문자열 배열 선언
    //char lines[3][80];

    //// 3줄 입력받기
    //for (int i = 0; i < 3; i++)
    //{
    //    cout << "한 줄을 입력하세요: ";
    //    cin.getline(lines[i], 80);
    //}
    //cout << endl;

    //// 3줄 출력
    //cout << "출력: " << endl;
    //for (int i = 0; i < 3; i++)
    //{
    //    cout << lines[i] << endl;
    //}


    // 02. 자작 예제
    //char lines[80];
    //cout << "Input: ";
    //// cin.getline(lines, 80); // 이걸 주석치고 다시 써보자. 아마 abc만 나올 것이다.
    //cin >> lines; // abc xyz
    //cout << endl;
    //cout << "Output: ";
    //cout << lines << endl; // abc (스페이스바, 엔터키, 탭키 모두 구분자)


    // 03. strcmp 예제
    char a[] = "ACZ";
    char b[] = "ACE";

    // 0(일치)
    // -1(첫번째가 두번째 문자열보다 사전 순으로 앞일 때)
    // 1(첫번째가 두번째 문자열보다 사전 순으로 뒤일 때)
    cout << strcmp(a, b) << endl;

    return 0;
}