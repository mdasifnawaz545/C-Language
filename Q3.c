#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read(int , int *ptr);
void display(int, int *ptr);
int main()
{
    int n;
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    read(n,ptr);
    display(n,ptr);
    return 0;
}
void read(int n , int *ptr)
{
    for (int i = 0; i < n; i++)
    {
    printf("Enter the %d element of the array : ",i+1);
    scanf("%d", ptr+i);
    }
    
}
void display(int n, int *ptr)
{
        for (int i = 0; i < n; i++)
    {
    printf("%d element is : %d\n",i+1,*(ptr+i));

    }
}
