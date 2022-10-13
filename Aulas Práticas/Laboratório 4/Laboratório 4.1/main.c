#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int valores[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%i ", valores[i]);
    }
    
    return 0;
}
