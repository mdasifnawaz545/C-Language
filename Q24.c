#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the row size : ");
    scanf("%d", &m);
    printf("Enter the column size : ");
    scanf("%d", &n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d %d Element : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d %d Element : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    return 0;
}