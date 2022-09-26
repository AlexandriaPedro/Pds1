#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, i, fact;

    scanf("%d", &num);

    fact = 1;

    for(i = 1; i <= num; i++) {
        fact *= i;
    }
    
    printf("%d", fact);

    return 0;
}
