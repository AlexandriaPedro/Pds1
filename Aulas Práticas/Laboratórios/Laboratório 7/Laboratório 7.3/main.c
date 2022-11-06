#include <stdio.h>

#include "escalar.h"

int main(int argc, char *argv[]) {
    // Escreva seu código aqui

    double n;
    double v1[1000];
    double v2[1000];

    scanf("%lf", &n);


    for(int i = 0; i < n; i ++) {
        scanf("%lf", &v1[i]);
    }
    for(int i = 0; i < n; i ++) {
        scanf("%lf", &v2[i]);
    }

    double resp = calcula_escalar(v1, v2, n);

    printf("%.2lf", resp);

    return 0;
}
