#include <stdio.h>
#include <stdlib.h>

int main() {
    int inteiro, multiplicado, dividido;

    scanf("%d", &inteiro);

    multiplicado = inteiro << 1;
    dividido = inteiro >> 1;

    printf("%d\n%d", multiplicado, dividido);
    
    return 0;
}
