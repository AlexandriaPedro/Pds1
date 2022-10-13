#include <stdlib.h>
#include <stdio.h>

int main() {
    int x, n[101], v[101], i, antes = 0, depois = 1, y;
    
    for (i = 0; i < 102; i++) {
        
        scanf("%d", &x);
        n[i] = x;
        if (x < 0) break;

    }
    
    v[0] = 0;
    v[1] = 1;
    
    for (i = 2; i < 102; i++) {
        v[i] = antes + depois;
        antes = depois;
        depois = v[i];
    }
    
    for (i = 0; n[i] > 0; i++) {
        
        y = n[i];
        printf("%d ", v[y]);
        
    }

    return 0;
}
