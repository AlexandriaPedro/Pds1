#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num < 50) {
        printf("0");
    } 
    else {
        printf("1");
    }
    return 0;
}
