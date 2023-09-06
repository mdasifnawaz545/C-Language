#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int m, n, s = 0, u = 0;
    printf("Enter row and column size : ");
    scanf("%d %d", &m, &n);
    int *ptr;
    ptr = (int *)malloc((m * n) * sizeof(int));
    int mat[m][n];
    int t[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d Element : ");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            t[i][j] = mat[j][i];
        }
        printf("\n");
    }
    printf("Transpose Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}