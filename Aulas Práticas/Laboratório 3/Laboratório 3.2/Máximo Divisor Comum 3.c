#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, num3, i, maior, mdc;

    scanf("%d %d %d", &num1, &num2, &num3);

    maior = num1;

    if ((num2 > num1) && (num2 > num3)) {
        maior = num2;
    }
    else if ((num3 > num1) && (num3 > num2)) {
        maior = num3;
    }
    
    for(i = 1; i <= maior; i++) {
        if((num1 % i == 0) && (num2 % i == 0)) {
            if(num3 % i == 0) {
                mdc = i;
            }
        }
    }
    
    printf("%d", mdc);

    return 0;
}
