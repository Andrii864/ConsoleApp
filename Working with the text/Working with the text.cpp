#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Working with the text

	char sumbol[] = { 'S', 'i', 'x'};
	cin.getline(sumbol, 4);

	for (int i = 0; i < 3; i++)
		cout << sumbol[i] << endl;

	string words = "Hello";
		
	cout << "Enter: ";
	cin >> words;
	cout << words;

	return 0;
}

