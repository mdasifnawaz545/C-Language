#include<stdio.h>
int main()
{
    int n,max,c=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
       printf("Enter %d element : ",i+1);
       scanf("%d",&a[i]);
    }
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        
        
            printf("%d ",a[i]);
        
        
    }
    printf("\n Even Array is : ");

    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            printf("%d ",a[i]);

            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0 && a[i]>c)
        {
            c=a[i];
        }
        
    }
    
    printf("Largest even element is : %d",c);
    return 0;
}