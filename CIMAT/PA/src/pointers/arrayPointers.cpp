//Correspondence between pointers and arrays

#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *numbersAddress = numbers;

    for (int i = 0; i < 5; i++) {
        std::cout << "The address of the number " << i + 1 << " is: " << numbersAddress ++ << std::endl;
    }
}