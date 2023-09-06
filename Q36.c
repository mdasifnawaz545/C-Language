#include<stdio.h>
void pali(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    pali(n);
    return 0;
}
void pali(int n)
{
    int r,rev=0,org=n;
    while (n!=0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
        /* code */
    }
    if (rev==org)
    {
        printf("It is a palindrome");
    }
    
}
