#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    // Цикли
    /*for (int i = 1000; i >= 3; i -= 7) {
        cout << "Element: " << i << "-7" << endl;
    }*/

    // While
   /* float j = 100.0f;
    while (j >= 10) {
        cout << "number: " << j << endl;
        j /= 2;
    }*/

    // do while 
  /*  int i = 100;
    do {
        cout << "Element: " << i << endl;
        i++;
    } while (i < 10);*/


    //Оператори в циклах

  /*  for (int i = 1; i <= 10; i++) {
        if (i == 8)
            break;

        if (i % 2 == 0) continue;

        cout << "El: " << i << endl;

    }*/

    // practick

    int UsNum = 0;
    int rand_num = 1 + rand() % 10;
    bool isStop = false;

    do {
        cout << "Enter number: ";
        cin >> UsNum;
        if (UsNum != rand_num)
            cout << "Number is incorrect!" << endl;
        else
            isStop = true;
    } while (!isStop);
    cout << "Right number!";


    return 0;
}

