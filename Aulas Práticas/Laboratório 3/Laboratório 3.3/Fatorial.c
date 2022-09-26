#include <stdlib.h>
#include <stdio.h>

int main() {
    long int fact, num, i;

    scanf("%ld", &num);

    fact = 1;

    for(i = 1; i <= num; i++) {
        fact *= i;
    }
    
    printf("%ld", fact);

    return 0;
}
