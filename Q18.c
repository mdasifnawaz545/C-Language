// Searching
#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("Enter the positon : ");
    scanf("%d",&p);
        printf("%d ",a[p-1]);

    
    return 0;
}