#include<stdio.h>
void sum(int , int);
void sub(int , int);
void result(int * (int , int));
int main()
{
    void (*fptr)(int , int);
    fptr=sum;
    result(10,4);
    return 0;
}
void sum(int a, int b)
{
    printf("%d",a+b);
}
void sub(int a, int b)
{
    printf("%d",a-b);
}