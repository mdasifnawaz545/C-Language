#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element : ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    
    return 0;
}