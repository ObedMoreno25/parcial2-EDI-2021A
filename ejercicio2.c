#include <stdio.h>

#define N 5

int main()
{
    int matriz[N][N];
    int ren, col;

    for(ren = 0; ren < N; ren++)
    {
        for(col = 0; col < N; col++)
        {
            if(ren == col)
            {
                matriz[ren][col] = 1;
            }
            else
            {
                matriz[ren][col] = 0;
            }
            printf("%d ", matriz[ren][col]);
        }
        printf("\n");
    }

}
