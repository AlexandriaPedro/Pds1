#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(int argc, char *argv[]) {
    // Escreva seu código aqui

    int n, m;
    double *A, *B, *C;

    A = aloca_matriz(n, m);
    B = aloca_matriz(m, n);

    le_matriz(A, n, m);
    le_matriz(B, m, n);

    C = produto_matricial(A, B, n, m);

    exibe_matriz(C, n, m);

    libera_matrix(A, n);
    libera_matrix(B, n);
    libera_matrix(C, n);

    return 0;
}