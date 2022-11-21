#ifndef FUNC_C_
#define FUNC_C_
#include <stdlib.h>

// Adicione as funções aqui

double* aloca_vetor(double n) {
    double *P;

    P = (double*) malloc(n * sizeof(double));

    return (double*) P;
}

double produto_escalar(double* vetor1, double* vetor2, int n) {
    double resp = 0;

    for(int i = 0; i < n; i++) {
        resp += vetor1[i] * vetor2[i];
    }

    return resp;
}

void libera_vetor(double *vetor) {
    free (vetor);
}

#endif