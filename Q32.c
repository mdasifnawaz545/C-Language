#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    printf("0 1 ");
    fibo(n);
    return 0;
}
void fibo(int n)
{
    int n1=0,n2=1,n3;
    for (int i = 2; i < n; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
    printf("%d ",n3);
    }
}
