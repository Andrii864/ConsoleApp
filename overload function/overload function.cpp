#include <string>
#include <iostream>

using namespace std;

void print(string word) {
	cout << word << endl;
}

void print(int word) {
	cout << word << endl;
}

void print(float word) {
	cout << word << endl;
}

void math(int a, int b) {
	int res = a * b;
	print(res);
}

void math(int a, int b, int c) {
	int res = a * b * c;
	print(res);
}

void math(float a, float b, float c) {
	float res = a * b * c;
	print(res);
}

int main()
{
	// Перевантаженя функцій

	print("some text");

	math(7, 7);
	math(2.8f, 3.4f, 10.8f);

	return 0;
}
