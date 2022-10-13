#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, v[10];
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    
    for (i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    
    return 0;
}
