//Use of malloc and free in c++


#include <iostream>
#include <stdlib.h>

int main(void) {
    char *p;
    int *q;
    float *r;
    double *s;

    // p = (char *) malloc(1);
    // q = (int *) malloc(4);
    // r = (float *) malloc(4);
    // s = (double *) malloc(8);
    //Using sizeof
    p = (char *) malloc(sizeof(char));
    q = (int *) malloc(sizeof(int));
    r = (float *) malloc(sizeof(float));
    s = (double *) malloc(sizeof(double));
    
    *p = 'a';
    *q = 1;
    *r = 1.0;
    *s = 1.0;

    printf("Valores: caracter %c, entero %d, flotante %f, doble %f\n", *p, *q, *r, *s);
    free(p);
    free(q);
    free(r);
    free(s);
    return 0;
}
