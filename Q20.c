// Addition of element in an array
// Deletion of element from an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,p,e;
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element : \n",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    printf("Enter the new element : \n");
    scanf("%d",&e);
    printf("Enter the Position : \n");
    scanf("%d",&p);
    n++;
for (int i = n-1; i >= p-1; i--)
{
    a[i+1]=a[i];
}

    a[p-1]=e;
    printf("\nArray After is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}