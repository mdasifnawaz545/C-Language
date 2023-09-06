#include<stdio.h>
int gcd(int,int);
int main()
{
    int h,l,a,b;
    printf("enter a and b : \n");
    scanf("%d %d",&a,&b);
    h=gcd(a,b);
    l=(a*b)/h;
    printf("HCF and LCM is %d and %d : \n",h,l);
    return 0;
}
int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    gcd(b,a%b);
}
