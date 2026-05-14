#include <iostream>
#include <string>

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
	// flush(getline이 받은 상태에서 다음 getline을 사용하는 경우) 해결을 위해 사용
	//cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // getline으로 건드린 cin 초기화. flush 방식
	//getline(cin, s2);
	//cout << s2 << endl;

	//string s1("abc");
	//string s2 = "abcd";

	//getline(cin, s2);
	//cout << s2 << endl;
	//cout << s2[1] << endl;
	//cout << s2.at(1) << endl;


	// 2. reserve
	string s2 = "abcd"; // 만약 getline이 아닌데, cin이라면 띄어쓰기에서 컷당하고 reverse된다.
	cout << s2 << endl;
	reverse(s2);
	cout << s2 << endl;


	return 0;
}