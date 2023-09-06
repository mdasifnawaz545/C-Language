#include<stdio.h>
void sum(int);
int main()
{
    int n;
    printf("Enter the no. of terms : ");
    scanf("%d",&n);
    sum(n);
    return 0;
}
void sum(int n)
{
    int s=0;
    for (int i = 0; i <=n; i++)
    {
        s+=i;
    }
    printf("%d",s);
    }
