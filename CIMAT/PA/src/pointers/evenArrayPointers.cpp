//Even numbers in an array using pointers
#include <iostream>

int main() {
    int numbers[10], *numbersAddress;

    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a number: ";
        std::cin >> numbers[i];
    }

    numbersAddress = numbers;

    for (int i = 0; i < 10; i++) {
        if (*numbersAddress % 2 == 0) {
            std::cout << "The number " << *numbersAddress << " is even" << std::endl;
            std::cout << "The address of the number is: " << numbersAddress << std::endl;
        }
        numbersAddress++;
    }
}