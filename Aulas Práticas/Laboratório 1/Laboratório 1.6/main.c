#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char caractere;
    int numero, resultado3, resultado4;
    float resultado1, resultado2;

    scanf("%c", &caractere);

    numero = (int) caractere;
    resultado1 = (numero - 90.0) / 3;
    resultado2 = resultado1 - 0.1;
    resultado3 = trunc(resultado2);
    resultado4 = (resultado3 % 100) % 10;

    printf("%d", resultado4);

    return 0;
}
