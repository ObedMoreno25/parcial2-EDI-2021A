#include <stdio.h>

#define M 3
#define N 2

int main()
{
    int matriz[M][N];
    int ren, col;

    for(ren = 0; ren < M; ren++)
    {
        for(col = 0; col < N; col++)
        {
            printf("Elemento [%d][%d]; ", ren, col);
            scanf("%d", &matriz[ren][col]);
        }
    }
    //Imprimimos matriz antes de cambiarla
    printf("Matriz Original:\n");
    for(ren = 0; ren < M; ren++)
    {
        for(col = 0; col < N; col++)
        {
            printf("%d ", matriz[ren][col]);
        }
        printf("\n");
    }

    //Imprimimos matriz despues de cambiarla
    printf("Matriz Transpuesta:\n");
    for(ren = 0; ren < N; ren++)
    {
        for(col = 0; col < M; col++)
        {
            printf("%d ", matriz[col][ren]);
        }
        printf("\n");
    }

}
