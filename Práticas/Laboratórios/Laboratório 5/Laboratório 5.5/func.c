#include <stdio.h>
#include "func.h"

// TODO: implemente aqui as funções requeridas

int arranjo_posicoes_valido(int *A, int n) {
    int i, j, aux = 0;
    
    for (i = 0; i < n; i++) {
        if (A[i] == A[(i+1)]) {
            continue;
        }
        for (j = 0; j < n; j++) {
            if (A[i] == j) {
                aux++;
                break;
            } else {
                continue;
            }
        }
    }
    if (aux == n) return 1;
    else return 0;
}
