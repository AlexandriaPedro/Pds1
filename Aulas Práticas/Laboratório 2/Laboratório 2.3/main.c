#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, num3, meio;

    scanf("%d %d %d", &num1, &num2, &num3);

    meio = (num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3) ? num1 : num1;
    meio = (num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3) ? num2 : meio;
    meio = (num3 > num2 && num3 < num1) || (num3 < num2 && num3 > num1) ? num3 : meio;

    printf("%d", meio);

    return 0;
}
