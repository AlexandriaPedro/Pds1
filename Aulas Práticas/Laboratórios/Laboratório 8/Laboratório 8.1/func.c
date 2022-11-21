#include <stdio.h>
#include <stdlib.h>
#include "func.h"

// TODO: implemente aqui as funções requeridas

int* aloca_vetor(int n) {
    int *p;

    p = (int*) malloc(n);

    return p;
}

int subarranjo_maximo(int *A, int n) {
    int i, soma = 0, aux = 0;
    
    for (i = 0; i < n; i++) {
        aux += A[i];
        
        if (aux < 0) {
            aux = 0;
        } else if (aux > soma) {
            soma = aux;
        }
    }
    return soma;
}

void libera_vetor(int *vetor) {

    free (vetor);
}