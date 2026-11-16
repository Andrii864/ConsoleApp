#include <string>
#include <iostream>

using namespace std;

void printer(string word);
int summa(int a, int b);

int main()
{
	printer("Enter text: ");

	string words = "";
	cin >> words;
	printer(words);

	int res1 = summa(60, 7);
	int res2 = summa(6, 7);

	if (res1 > res2) cout << res1;
	else cout << res2;



	return 0;
}

void printer(string word) {
	cout << word << endl;
}

int summa(int a, int b) {
	int result = a + b;
	cout << result << endl;

	return result;
}
