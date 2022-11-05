#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, num3, a, b, c;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) 
    {
        a = num1;
    } else if (num2 > num1 && num2 > num3)
    { 
        a = num2;
    } else if (num3 > num1 && num3 > num2)
    {
        a = num3;
    }

    if (num1 <= num2 && num1 <= num3) 
    {
        c = num1;
    } else if (num2 < num1 && num2 < num3)
    { 
        c = num2;
    } else if (num3 < num1 && num3 < num2)
    {
        c = num3;
    }

    b = (num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3) ? num1 : num1;
    b = (num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3) ? num2 : b;
    b = (num3 > num2 && num3 < num1) || (num3 < num2 && num3 > num1) ? num3 : b;

    printf("%d, %d, %d", c, b, a);

    return 0;
}
