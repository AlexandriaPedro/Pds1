#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
    int n, i, x, soma;
    
    scanf("%d", &n);
    
    int A[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        A[i] = x;
    }
    
    soma = subarranjo_maximo(A, n);
    
    printf("%d", soma);
    
    return 0;
}
