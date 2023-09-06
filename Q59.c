#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read(int , int *);
void max(int , int *);
int main()
{
    int *ptr,*p,n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    read(n,&a);
    max(n,&a);
    return 0;
}
void read(int n, int *str)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",str+i);
    }
    
}
void max(int n, int *str)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(str+i)>*(str+j))
            {
                max=*(str+i);
            }
            else max=*(str+j);
            
        }
        

    }
    printf("Maximum element of the array is : %d",max);
}