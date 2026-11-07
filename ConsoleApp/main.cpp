#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "uk_UA");
    
    std::cout << "Привіт" << std::endl;

    std::cout << "Світ" << std::endl;

    return 0;
}