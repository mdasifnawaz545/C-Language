#include <stdio.h>
int main()
{
    int r, c, trace = 0;
    printf("Enter the row and column of matrix 1 : ");
    scanf("%d %d", &r, &c);
    printf("Enter the row and column of matrix 2 : ");
    scanf("%d %d", &r, &c);
    int m1[r][c];
    int m2[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the %d Element : ");
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\n");
    printf("\nMatrix 1 : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m1[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the %d Element : ");
            scanf("%d", &m2[i][j]);
        }
    }
    printf("\n");
    printf("\nMatrix 2 : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m2[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {

                trace += m1[i][j] + m2[i][j];
            }
        }
    }
    printf("Trace is : %d\n", trace);
    return 0;
}