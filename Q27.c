// even and odd
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, even = 0, odd = 0,c=0, *ptr,max;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element : ");
        scanf("%d", &a[i]);
    }
    printf("Array :");

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
           
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]%2==0)
            {
       if (a[i]>a[j])
       {
        max=a[i];
       }
        else max=a[j];
        }
               
            }
            

        
       
    }
    printf("Max is : %d\n",max);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}