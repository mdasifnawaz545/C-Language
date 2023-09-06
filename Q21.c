#include<stdio.h>
void change(int *,int *);
int main()
{
    int a=5,b=10;
    int *p,*q;
    p=&a;
    q=&b;
    printf("a=%d  b=%d\n",a,b);
    change(&a,&b);
    printf("a=%d  b=%d",a,b);
    return 0;
}
void change(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}