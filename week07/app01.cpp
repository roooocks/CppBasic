#include <iostream>

using namespace std;

void first()
{
	// 1st array : stack memory
	int rowsColumns[3][5];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			rowsColumns[i][j] = i * j;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << rowsColumns[i][j] << " ";
		}
		cout << endl;
	}
}

void second()
{
	// 2d array : stack memory & heap memory
	int columns = 0;
	int* arr[3]; // stack memory

	cin >> columns;

	for (int i = 0; i < 3; i++) {
		arr[i] = new int[columns]; // heap memory
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = i * j;
		}
	}
	cout << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++) {
		delete[] arr[i];
		arr[i] = nullptr;
	}
}

int main()
{
	int rows = 0, columns = 0;
	int** arr = nullptr;

	cin >> rows;
	cin >> columns;

	arr = new int*[rows]; // 힙메모리에 포인터 배열 동적할당
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[columns]; // 힙메모리에 정수 타입을 담는 배열 동적 할당
		for (int j = 0; j < columns; j++) {
			arr[i][j] = i * j;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = rows - 1; i >= 0; i--) {
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;

	return 0;
}
