#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
    int n, i, x, r;
    
    scanf("%d", &n);
    
    int A[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        A[i] = x;
    }
    
    r = arranjo_posicoes_valido(A, n);
    
    printf("%d", r);
    
    return 0;
}
