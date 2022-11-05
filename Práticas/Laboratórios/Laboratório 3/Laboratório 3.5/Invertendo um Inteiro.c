#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, x;

    scanf("%d", &num);

    printf("Valor invertido: ");
    
    while (num > 0) {
        x = num % 10;
        num = (num - x) / 10;
        printf("%d", x);
    }

    return 0;
}
