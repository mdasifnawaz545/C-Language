#include<stdio.h>
int fact(int );
int main()
{
    int n,r,num,den,result;
    printf("Enter the value of n and r : ");
    scanf("%d %d",&n,&r);
    num=fact(n);
    den=fact(r)*fact(n-r);
    result=num/(float)den;
    printf("Combination is : %d",result);
    return 0;
}
int fact(int n)
{
    int f=1;
    for (int i = 1; i <= n; i++)
    {
        f=f*i;
    }
    return f;
}