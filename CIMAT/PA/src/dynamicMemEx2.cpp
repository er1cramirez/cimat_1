/*
usa malloc, realoc y free para solucionar un problema de promedios de calificaciones almacenadas en un vector de tamaño n dinamico, las calificaciones son aleatoreas entre 0 y 10 y el tañano del vector varia dependiendo del tamaño del grupo.

el programa debera preguntar el tamaño del vector(tamaño grupo) y debera preguntar si desea continuar llenando el vector de calificaciones.
Nota: el vector reasigna su tamano cada vez que el usuario lo indica 
usa printf y scanf
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void promedio(int *calif, int n);
void llenar(int *calif, int n);
int main() {
    int *calif;
    int n, i;
    char resp;   
    srand(time(NULL));
    printf("Ingrese el tamaño del grupo: ");
    scanf("%d", &n);
    calif = (int *) malloc(n*sizeof(int));
    do {
        llenar(calif, n);
        promedio(calif, n);
        printf("Desea continuar? (s/n): ");
        scanf(" %c", &resp);
        if(resp == 's') {
            printf("Ingrese el tamaño del grupo: ");
            scanf("%d", &n);
            calif = (int *) realloc(calif, n*sizeof(int));
        }
    } while(resp == 's');
    free(calif);
    return 0;
}

//Funcion para calcular promedio con un vector dinamico

void promedio(int *calif, int n) {
    int i, suma=0;
    float prom;
    for(i=0; i<n; i++) {
        suma += calif[i];
    }
    prom = (float)suma/n;
    printf("El promedio del grupo es: %.2f\n", prom);
}

//Funcion para llenar el vector con numeros aleatoreos
void llenar(int *calif, int n) {
    int i;
    for(i=0; i<n; i++) {
        calif[i] = rand()%11;
    }
}
