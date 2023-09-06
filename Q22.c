// reverse array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("Enter the size : ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d Element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Array is : ");
        for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
    printf("Reverse Array : ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}