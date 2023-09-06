#include <stdio.h>
int count(int);
int main()
{
    int n,b;
    printf("Enter the number : ");
    scanf("%d", &n);
    b=count(n);
    printf("%d ",b);
    return 0;
}
int count(int n)
{
    int c = 0, r;
    while (n != 0)
    {
        r = n % 10;
        c++;
        count(n/10);
    }
    return c;
}