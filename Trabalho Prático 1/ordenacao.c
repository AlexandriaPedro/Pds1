#include "ordenacao.h"

void swap(int *A, unsigned i, unsigned j) {
    int auxiliar;

    auxiliar = A[i];
    A[i] = A[j];
    A[j] = auxiliar; 

    // TODO: implementar função de swap
}

bool sorted(int *A, int n) {
    int i;
    int j;
    int verificador = 0;

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (A[i] > A[j]) {
                verificador += 1; 
            }
        }
    }

    if (verificador == 0) {
        return true;
    } else {
        return false;
    }

    // TODO: verificar se A está ordenado
    // return false;
}

void bubblesort(int *A, int n) {
    int i;
    int j;
    int auxiliar;

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (A[i] > A[j]) {
                auxiliar = A[i];
                A[i] = A[j];
                A[j] = auxiliar;
            }
        }
    }

    // TODO: implementar o Bubble Sort
}
