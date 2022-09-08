#include <stdio.h>

int main() {
    float a = 3.14159, b =2.71828;

    //Início das linhas de alteração do programa base.
    float c;

    c = a;
    a = b;
    b = c;
    //Fim das linhas de alteração do programa base.

    printf("\nPI = %f", b);
    printf("\nEULER = %f", a);

    return 0;
}
