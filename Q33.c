/*WAP to compute the sine series using user defined functions.

sin x = x −
x
3
3!
+
x
5
5!
−
x
7
7!
+ ⋯*/
#include<stdio.h>
int power(int ,int );
int fact(int);
int main()
{
    int num,den,s=1,x,n;
    float sum=0;
    printf("Enter the number of terms : \n");
    scanf("%d",&n);
    printf("Enter the value of X : \n");
    scanf("%d",&x);
    for (int i = 0; i <= n; i+=3)
    {
        num=power(x,i);
        den=fact(i);
        sum+=num/(float)den;
        s=s*-1;
    }
    printf("Sine Series of %dth term is : %f\n",n,sum);
    return 0;
}
int power(int x,int y)
{
    int p=1;
    for (int i = 1; i < y; i++)
    {
        p=p*x;
    }
    return p;
}
int fact(int n)
{
    int f=1;
    for (int i = 1; i <= n; i++)
    {
       f*=i;
    }
    return f;
}