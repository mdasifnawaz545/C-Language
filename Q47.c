#include<stdio.h>
int main()
{
    int n,e,p;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d Element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("Enter element : ");
    scanf("%d",&e);
    for (int i = 0; i < n; i++)
    {
        if (a[i]==e)
        {
            p=i;
        }
        
    }
    for (int i = p; i < n; i++)
    {
        // int temp;
        // temp=a[i];
        a[i]=a[p+i];
        // a[p+i]=temp;
    }
    n--;
    printf("\nArray After is : ");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}