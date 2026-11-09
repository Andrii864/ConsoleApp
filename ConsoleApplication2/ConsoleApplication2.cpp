#include <iostream>

int main() {
    //Умовні конструкції
    std::cout << "Enter number: ";
    int user_number = 0;
    std::cin >> user_number;

    bool isHappy = true;

    if (user_number >= 5 && isHappy) {
        std::cout << "Yes" << std::endl;
    }
    else if(user_number < 0)
        std::cout << "number < 0" << std::endl;

    else
        std::cout << "Else" << std::endl;

    if (user_number > 100)
        std::cout << "number > 100" << std::endl;

    return 0;
}
