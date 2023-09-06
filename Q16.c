#include<stdio.h>
int main()
{
    int a[5],max;
    for (int i = 0; i < 5; i++)
    {
         printf("Enter %d element",i+1);
         scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
        if (a[i]>a[i+1])
        {
            max=a[i];
        }
        else max=a[i+1];            
        }
    }
    
    printf("%d",max);
   

    return 0;
}