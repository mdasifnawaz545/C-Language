#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int r1,c1,r2,c2,r3,c3,mul=0;
    // int *ptr1,*ptr2,*ptr3;
    printf("Enter Matrix 1 Row and Coloumn size : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter Matrix 1 Row and Coloumn size : ");
    scanf("%d %d",&r2,&c2);
    // ptr1=(int *)malloc((r1*c1)*sizeof(int));
    // ptr2=(int *)malloc((r2*c2)*sizeof(int));
    // ptr3=(int *)malloc((c1*r2)*sizeof(int));
    int m1[r1][c1];
    int m2[r2][c2];
    int m3[r1][c2];
    if (c1==r2)
    {

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter %d %d Element : ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
        
    }
    printf("\n");
    printf("Matrix 1 : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter %d %d Element : ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
        
    }
    printf("\n");
    printf("Matrix 2 : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
        
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            m3[i][j]=0;
            for (int k = 0; k < r2; k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
            
        
        }
    }
    printf("\n");
    printf("Matrix 3 : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ",m3[i][j]);
        }
        printf("\n");
        
    }
    }
    else printf("\nMatrix Multiplication is not possible.\n");
    // free(ptr1);
    // free(ptr2);
    // free(ptr3);
    return 0;
}