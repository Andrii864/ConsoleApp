#include <iostream>

int main(){
    //Умовні конструкції Switch - case

    int a;
    std::cin >> a;

    switch (a) {
    case 5: std::cout << "Number is 5"; break;
    case 8: std::cout << "Number is 8"; break;
    case 10: std::cout << "Number is 10"; break;
    default: std::cout << "Number is default";

    }

    return 0;
}
