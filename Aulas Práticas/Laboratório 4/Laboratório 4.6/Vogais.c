#include <stdlib.h>
#include <stdio.h>

int main() {

    char str[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0, n;
    
    fgets(str, 100, stdin);
    
    for(n = 0; str[n] != '\0'; n++) {
        
        if (str[n] == ' ') continue;
        else if (str[n] == 'A' || str[n] == 'a') a++;
        else if (str[n] == 'E' || str[n] == 'e') e++;
        else if (str[n] == 'I' || str[n] == 'i') i++;
        else if (str[n] == 'O' || str[n] == 'o') o++;
        else if (str[n] == 'U' || str[n] == 'u') u++;

    }
    
    printf("A: %d, E: %d, I: %d, O: %d, U: %d", a, e, i, o, u);

    return 0;
}
