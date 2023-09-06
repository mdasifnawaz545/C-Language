#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read(int , int *);
void sum(int , int *);
int main()
{
    int *ptr,*p,n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    read(n,&a);
    sum(n,&a);
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
void sum(int n, int *str)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+*(str+i);

    }
    printf("Sum of the array is : %d",sum);
}