#include <iostream>

int main(){
    int number, *numberAddress;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if(*numberAddress % 2 == 0){
        std::cout << "The number is even" << std::endl;
        std::cout << "The address of the number is: " << numberAddress << std::endl;
    }else{
        std::cout << "The number is odd" << std::endl;
        std::cout << "The address of the number is: " << numberAddress << std::endl;
    }
    return 0;
}