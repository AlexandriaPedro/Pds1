#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2;
    bool a, b;

    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    printf("AND:%d OR:%d XOR:%d", a & b, a | b, a ^ b);

    return 0;
}
