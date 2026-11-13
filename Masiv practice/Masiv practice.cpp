#include <iostream>

using namespace std;

int main()
{

	// Робота з масивами 

	int num[4];

	for (int i = 0; i < 4; i++) {
		cout << "Enter number: ";
		cin >> num[i];
	}



	int sum = 0;
	int max = num[0];
	for (int i = 0; i < 4; i++) {
		sum += num[i];
		if (num[i] > max) max = num[i];


	}
	cout << "Summa: " << sum << endl;
	cout << "Max: " << max << endl;


	for (int i = 0; i < 4; i++)
		cout << " El:" << num[i] << endl;



}
