#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void reverse(string& strg)
{
	//string temp(strg);
	string temp = strg;

	int size = strg.size();
	for (int i = 0; i < size; i++)
	{
		strg[i] = temp[size - 1 - i];
	}
}

int main()
{
	// 1. week10에서 안한거 써보기
	//string s1("abc");
	//string s2 = s1;

	//cout << (s1 == s2) << endl;
	//cout << boolalpha << (s1 == s2) << endl; // #include <iomanip> 필요
	//cout << (s1 == s2) << endl; // 한번 지정자로 고정하면 그걸로 가게 되버린다.
	//cout << noboolalpha << (s1 == s2) << endl; // 그게 싫으면 noboolalpha 써주면 된다.
	//cout << (s1 == s2) << endl;

	// 여기서부터는 공부
	//cin >> s2; // 이 방식은 띄어쓰기부터 다 무시를 해버린다.
	//getline(cin, s2); // 띄어쓰기까지 받을거면 getline을 써줘야 한다. #include <string>
	//getline(cin, s2, '$'); // 3번째 파라미터는 종료할 지점을 설정해준다. # 넣으면 # 넣을 때 끊을 수 있는 것
	//cout << s2 << endl;

	// 버퍼 비우기 (남아있는 값을 제거)
	// flush 방식을 여기서 배운다. 버퍼의 남은 값을 강제로 출력 시켜서 버퍼를 비워버린다. (개행도 안함)
	//  - std::endl => 개행 + flush
	//  - std::flush => flush만

	// 근데 수업에서 배운건 flush가 아니다. 그냥 버퍼에 남거나 남을 수 있는 '\n'을 지우는거다.
	// cin >> x;를 생각해보자. 이건 개행 전까지만 받고 이후에 개행은 입력 버퍼(cin)에 남기는 거다.
	// 이걸 없에려고 쓰는게 cin.ignore()이고 보통이걸 쓴다고 한다.
	// getline은 보통 뒤에 개행을 안남겨서 getline 전에 쓰는거라고 한다.
	//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//getline(cin, s2);
	//cout << s2 << endl;

	//string s1("abc");
	//string s2 = "abcd";

	//getline(cin, s2);
	//cout << s2 << endl;
	//cout << s2[1] << endl;
	//cout << s2.at(1) << endl; // 함수 방식


	// 2. reserve
	//string s2 = "abcd"; // 만약 getline이 아닌데, cin이라면 띄어쓰기에서 컷당하고 reverse된다.
	//cin >> s2;
	//cout << s2 << endl;
	//reverse(s2);
	//cout << s2 << endl;


	// 급해서 패스를 많이 하셨다.
	// 문서에 사진 넣어놨는데, 예제 아니면 읽어보기만 해도 될 듯 하다.
	// 동작 방식을 많이 알아두자

	return 0;
}