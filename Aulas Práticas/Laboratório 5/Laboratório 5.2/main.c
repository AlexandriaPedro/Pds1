#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (eh_triangulo(a, b, c) == false) {
        printf("Não forma triângulo");
    } else {
        if (tipo_triangulo(a, b, c) == 0) {
            printf("Escaleno");
        } else if (tipo_triangulo(a, b, c) == 1) {
            printf("Isósceles");
        } else if (tipo_triangulo(a, b, c) == 2) {
            printf("Equilátero");
        }
    }

    return 0;
}
