#include<stdio.h>
int sum(int []);
int main()
{
    int s;

    int a[5]={1,2,3,4,5};
    s=sum(a);
    
    return 0;
}
int sum(int a[])
{
for (int i = 0; i < 5; i++)
{
    return a[i]+sum(a[i-1]);
}

    
}
