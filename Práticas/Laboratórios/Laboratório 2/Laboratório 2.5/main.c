#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int velMax, velRad;
    
    scanf("%d %d", &velMax, &velRad);

    if (velRad <= velMax)
    {
        printf("Sem Infração");
    } else if (velRad <= velMax + (0.20 * velMax))
    {
        printf("Infração Média");
    } else if (velRad > velMax + (0.20 * velMax) && velRad <= velMax + (0.50 * velMax))
    {
        printf("Infração Grave");
    } else
    {
        printf("Infração Gravíssima");
    }
    
    return 0;
}
