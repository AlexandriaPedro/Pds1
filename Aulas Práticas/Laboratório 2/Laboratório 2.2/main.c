#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, z, a;
    
    scanf("%d %d %d", &x, &y, &z);
    
    a = x > y ? x : y;
    a = a > z ? a : z;
    
    printf("%d", a);
    
    return 0;
}
