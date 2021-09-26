#include <stdio.h>

#define N 3

void capturaMatriz(int m[N][N]);
int esSimetrica(int m[N][N]);

int main()
{
    int matriz[N][N];
    int resp;

    capturaMatriz(matriz);
    resp = esSimetrica(matriz);
    if(resp)
        printf("La matriz es simetrica");
    else
        printf("La matriz no es simetrica");



}


void capturaMatriz(int m[N][N])
{
    int ren, col;
    for(ren = 0; ren < N; ren++)
    {
        for(col = 0; col < N; col++)
        {
            printf("Elemento [%d][%d]: ", ren, col);
            scanf("%d", &m[ren][col]);
        }
    }
}

int esSimetrica(int m[N][N])
{
    int ren, col, r = 1;

    for(ren = 0; ren < N; ren++)
    {
        for(col = ren+1 ; col < N; col++)
        {
            if(m[ren][col] != m[col][ren])
            {
                r = 0;
            }
        }
    }
    return(r);
}
