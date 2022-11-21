#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(int argc, char *argv[]) {
    // Escreva seu código aqui

    int n;

    scanf("%d", &n);

    double *A, *B;

    A = aloca_vetor(n);
    B = aloca_vetor(n);

    for(int i = 0; i < n; i ++) {
        scanf("%lf", &A[i]);
    }
    for(int i = 0; i < n; i ++) {
        scanf("%lf", &B[i]);
    }

    double resp = produto_escalar(A, B, n);

    printf("%lf", resp);

    libera_vetor(A);
    libera_vetor(B);

    return 0;
}