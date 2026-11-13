#include <iostream>

using namespace std;

int main()
{
	//Багатовимірні масиви

	int matrix[3][2]{
		{ 10, 5 },
		{ 6, 7 },
		{ 2, 4 }
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "element:" << matrix[i][j] << endl;
		}
	}


}