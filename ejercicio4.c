#include <stdio.h>

#define M 3
#define N 4

void capturaMatriz(int m[M][N]);
int encuentraMayor(int m[M][N], int *r, int *c);

int main()
{
    int matriz[M][N];
    int ren, col, mayor;

    capturaMatriz(matriz);
    mayor = encuentraMayor(matriz, &ren, &col);
    printf("El numero mayor es %d y se encuentra en la posicion [%d][%d]", mayor, ren, col);
}

void capturaMatriz(int m[M][N])
{
    int ren, col;
    for(ren = 0; ren < M; ren++)
    {
        for(col = 0; col < N; col++)
        {
            printf("Elemento [%d][%d]: ", ren, col);
            scanf("%d", &m[ren][col]);
        }
    }
}

int encuentraMayor(int m[M][N], int *r, int *c)
{
    int bandera = 0;
    int ren, col;

    for(ren = 0; ren < M; ren++)
    {
        for(col = 0; col < N; col++)
        {
            if(bandera < m[ren][col])
            {
                bandera = m[ren][col];
                *r = ren;
                *c = col;
            }
        }
    }
    return(bandera);

}
