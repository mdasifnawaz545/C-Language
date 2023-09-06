#include<stdio.h>
int main()
{
    int x,y,a,b,lcm;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);
    x=a,y=b;
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else b=b-a;
    }
    lcm=(x*y)/a;
    printf("Hcf and lcm is %d %d\n",a,lcm);
    return 0;
}