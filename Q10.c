#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum=sum+j;
        }
        
    }
    printf("%d ",sum);
    return 0;
}