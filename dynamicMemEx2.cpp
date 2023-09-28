//use of malloc, realloc and free in c++

#include <iostream>
#include <stdlib.h>

int main() {
    char *buffer, character;
    int i = 0;

    buffer = (char *) malloc(1*sizeof(char));
    printf("Enter a text: ");
    while((character = getchar()) != '\n') {
        buffer = (char *) realloc(buffer, (i+1)*sizeof(char));
        buffer[i] = character;
        i++;
    }
    for(int j = 0; j < i; j++) {
        printf("%c", buffer[j]);
    }
    printf("\n");
    free(buffer);
    return 0;
}