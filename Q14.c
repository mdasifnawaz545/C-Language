#include<stdio.h>
int main()
{
    int r,rev,count=1,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        count++;
        rev=rev*10+r;
        n=n/10;
    }
    for (int i = 1; i <= count; i++)
    {
        int r=rev%10;
        if (r==0)
        {
            printf("Zero ");
        }
        else if (r==1)
        {
            printf("One ");
        }
        else if (r==2)
        {
            printf("Two ");
        }
        else if (r==3)
        {
            printf("Three ");
        }
        else if (r==4)
        {
            printf("Four ");
        }
        else if (r==5)
        {
            printf("Five ");
        }
        else if (r==6)
        {
            printf("Six ");
        }
        else if (r==7)
        {
            printf("Seven ");
        }
        else if (r==8)
        {
            printf("Eight ");
        }
        else if (r==9)
        {
            printf("Nine ");
        }
        rev=rev/10;
    }
    
    return 0;
}