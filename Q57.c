#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read(int,int *);
void display(int ,int *);
int main()
{
    int *ptr,*str;
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    int a[n];
    read(n,&a);
    display(n,&a);
    return 0;
}
void read(int n,int *str)
{
    for (int i = 0; i < n; i++)
    {
    printf("Enter %d Element : ",i+1);
    scanf("%d",(str+i));
    }
    
}
void display(int n,int *str)
{
    printf("Array is : ");
    for (int i = 0; i < n; i++)
    {
    printf("%d ",*(str+i));
    }
    
}