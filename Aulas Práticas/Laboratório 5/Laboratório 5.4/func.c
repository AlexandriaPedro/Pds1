#include <stdio.h>
#include "func.h"

// TODO: implemente aqui as funções requeridas

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
