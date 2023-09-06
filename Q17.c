#include<stdio.h>
int main()
{
    int a1[5],a2[5],a3[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element : ");
        scanf("%d",&a1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element : ");
        scanf("%d",&a2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        a3[i]=a1[i]*a2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a3[i]);
    }
    
    return 0;
}