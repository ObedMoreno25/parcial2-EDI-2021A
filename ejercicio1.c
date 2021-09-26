#include <stdio.h>

#define REN 4
#define COL 3

int main()
{
    float num[REN][COL];
    float prom;
    int renglon, columna;

    for(renglon = 0; renglon < REN; renglon++)
    {
        for(columna = 0; columna < COL; columna++)
        {
            printf("Elemento [%d][%d]: ", renglon,columna);
            scanf("%f", &num[renglon][columna]);
        }
    }

     for(columna = 0; columna < REN; columna++)
    {
        for(renglon = 0; renglon < COL; renglon++)
        {
            prom = prom + num[columna][renglon];

        }
        printf("\nPromedio Columna %d: %2.f \n", columna, prom/REN);
    }
    return 0;
}
