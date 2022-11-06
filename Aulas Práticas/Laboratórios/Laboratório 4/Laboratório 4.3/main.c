#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, i, c;
    
    scanf("%d", &n);

    double v[n], u[n], produto;

    for(c = 0; c < 2; c++) {
        for(i = 0; i < n; i++) {
            if(c == 0) {
                scanf("%lf", &v[i]);
            } else if (c == 1) {
                scanf("%lf", &u[i]);
            }
        }
    }

    produto = 0;

    for(i = 0; i < n; i++) {
        produto += (v[i] * u[i]); 
    }

    printf("%lf", produto);

    return 0;
}
