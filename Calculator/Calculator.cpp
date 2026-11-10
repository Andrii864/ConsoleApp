#include <iostream>

using namespace std;

int main(){
    srand(time(NULL));
    int result = 1 + rand() % 20;
    cout << result << endl;

    float num1, num2;

    cout << "Enter number 1:";
    cin >> num1;

    cout << "Enter number 2:";
    cin >> num2;

    char math;
    cout << "Enter math symbol:";
    cin >> math;

   /* if (math == '+')
        std::cout << "Result: " << num1 + num2 << std::endl;
     if (math == '-')
        std::cout << "Result: " << num1 - num2 << std::endl;
     if (math == '*')
        std::cout << "Result: " << num1 * num2 << std::endl;
     if (math == '/') {
         if (num2 == 0.0f) 
             std::cout << "Error" << std::endl;
         else 
             std::cout << "Result: " << num1 / num2 << std::endl;
     }*/

    switch (math) {
    case '+': std::cout << "Result: " << num1 + num2 << std::endl; break;
    case '-': std::cout << "Result: " << num1 - num2 << std::endl; break;
    case '*': std::cout << "Result: " << num1 * num2 << std::endl; break;
    case '/':
        if (num2 == 0.0f) std::cout << "Error" << std::endl;
        else std::cout << "Result: " << num1 / num2 << std::endl;
        break;
    default: std::cout << "Error math symbol" << std::endl;
    }
       
    // Скорочені дії
    int a = 10;
    a += 5;
    a++;

    int b = 10, res;
    res = a % b;


    return 0;
}