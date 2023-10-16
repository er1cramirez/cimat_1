//Dynamic assignment of memory for an array using new and delete
//requesting to the user the size of the array, for this example califications and storing them in an array
//use functions to ask the notes

#include <iostream>
void askNotes(int *notes, int size);

int main(){}

void askNotes(int *notes, int size){
    for(int i = 0; i < size; i++){
        std::cout << "Enter the note " << i + 1 << ": ";
        std::cin >> notes[i];
    }
}