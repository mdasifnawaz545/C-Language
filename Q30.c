#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int *ptr;
    ptr=(int* )malloc(n*sizeof(int));
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element : ",i+1);
        scanf("%d",&a[i]);

    }
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nModidied Array is : ");

    for (int i = 0; i < n/2; i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
        for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}