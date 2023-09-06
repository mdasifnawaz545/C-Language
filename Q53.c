#include<stdio.h>
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    int *ptr=&a;
    for (int i = 0; i < n; i++)
    {
        printf("%d Element : ");
        scanf("%d",&a[i]);
    }
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i));
    }

    return 0;
}