#include <iostream>
#include <string>

#include <cstring>

using namespace std;

int main()
{
	//cout << "01. string start" << endl;
	//// string이 지금은 빨라도, 코드가 많거나 데이터가 많아질수록 느려진다.
	//// 내부에서 동적 할당을 계속 해줘서 그런거다. (오버헤드 발생)
	//char a[] = "ACE";
	//char b[] = "ACE";
	//string c = "ACE";
	//string d = "ACE";

	//cout << strcmp(a, b) << endl; // 0(똑같음) / -1, 1(두 문자열이 다를 때)
	//cout << (c == d) << endl; // 1(true), 0(false)

	//// a = "XYZ" // error
	//c = "XYZ!"; // success
	//cout << c << endl;


	//cout << "02. const, literal" << endl;
	//// char* p = "ACE"; // error
	//const char* p = "ACE"; // string literal(constant, read-only)
	//cout << p << endl;


	//cout << "03. array, literal, compact initializer" << endl;
	//char a[] = "Hello"; // compact initializer, const char a[] = {'H', 'e', 'l', ..., '\0'};
	//const char b[] = "Hello"; // compact initializer
	//const char* c = "Hello"; // string literal

	//a[1] = 'i';
	//cout << a << endl;
	////b[1] = 'e'; // error
	////cout << b << end;
	//cout << c << endl;
	//cout << c[1] << endl;
	////c[1] = 'e'; // error


	//cout << "04. comparing(strcmp, strncmp)" << endl;
	//// Declaration of two C - strings
	//const char* str1 = "Hello Alice.";
	//const char* str2 = "Hello John.";
	//const char* str3 = "Hello Betsy.";

	//// Comparison use the whole length 
	//cout << "Comparing str1 and str2: ";
	//cout << strcmp(str1, str2) << endl;
	//cout << "Comparing str2 and str3: ";
	//cout << strcmp(str2, str3) << endl;

	//// Comparison using one the first characters
	//cout << "Comparing first 5 characters of str1 and str2: ";
	//cout << strncmp(str1, str2, 5); // str1, str2의 5글자가 같음? 을 의미

	return 0;
}