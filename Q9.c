#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        if (n%(i*i)==0)
        {
            printf("it is a perfect square\n");
        }
        else flag++;
    }
    if (flag!=1)
    {
     printf("it is not a perfect square\n");
    }
    return 0;
}