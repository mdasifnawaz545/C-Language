#include<stdio.h>
int main()
{
    int b,e,p=1;
    printf("Enter the base and exponent : ");
    scanf("%d %d",&b,&e);
    for (int i = 1; i <=e; i++)
    {
        p=b*p;
    }
    printf("%d",p);
    return 0;
}