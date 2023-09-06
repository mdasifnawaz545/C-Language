#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("Ente the number : ");
    scanf("%d",&n);
    reverse(n);


    return 0;
}
void reverse(int n)
{
    int rev=0,r;
    while (n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Reverse is %d\n",rev);
}