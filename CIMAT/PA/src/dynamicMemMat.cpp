// Using calloc and realloc to generate a dynamic matrix of integers whith dimensions m x n
// the user can change the dimensions of the matrix in each iteration
// Use functions to fill the matrix with random numbers, print the matrix and calculate the sum of the matrix elements
//Use printf and scanf

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenar(int **mat, int m, int n);
void imprimir(int **mat, int m, int n);
int suma(int **mat, int m, int n);

int main() {
    int **mat;
    int m, n, i, j;
    char resp;
    srand(time(NULL));
    printf("Ingrese el numero de filas: ");
    scanf("%d", &m);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &n);
    mat = (int **) calloc(m, sizeof(int *));
    for(i=0; i<m; i++) {
        mat[i] = (int *) calloc(n, sizeof(int));
    }
    do {
        llenar(mat, m, n);
        imprimir(mat, m, n);
        printf("La suma de los elementos de la matriz es: %d\n", suma(mat, m, n));
        printf("Desea continuar? (s/n): ");
        scanf(" %c", &resp);
        if(resp == 's') {
            printf("Ingrese el numero de filas: ");
            scanf("%d", &m);
            printf("Ingrese el numero de columnas: ");
            scanf("%d", &n);
            for(i=0; i<m; i++) {
                mat[i] = (int *) realloc(mat[i], n*sizeof(int));
            }
        }
    } while(resp == 's');
    for(i=0; i<m; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}

//Function to fill the matrix with random numbers
void llenar(int **mat, int m, int n) {
    int i, j;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            mat[i][j] = rand()%11;
        }
    }
}

//Function to print the matrix
void imprimir(int **mat, int m, int n) {
    int i, j;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

//Function to calculate the sum of the matrix elements
int suma(int **mat, int m, int n) {
    int i, j, suma=0;
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            suma += mat[i][j];
        }
    }
    return suma;
}
