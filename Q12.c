#include<stdio.h>
int main()
{
    int n,r, sq=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        sq=sq+r*r*r;
        n=n/10;
    }
    printf("%d ",sq);
    return 0;
}