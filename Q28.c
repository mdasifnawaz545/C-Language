#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int m,n,s=0,u=0;
    printf("Enter row and column size : ");
    scanf("%d %d",&m,&n);
    int *ptr;
    ptr=(int*)malloc((m*n)*sizeof(int));
    int mat[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d Element : ");
            scanf("%d",&mat[i][j]);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j]==mat[j][i])
            {
                    s++;
            }
            else     u++;
            
        }
        
    }
    if (s==4)
    {
                        printf("It is a Symmetricla matrix\n");

    }
    else if (u>1)
    {
                        printf("It is not a Symmetricla matrix\n");

    }
    
    
    return 0;
}