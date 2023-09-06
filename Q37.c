#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter starting and ending value : ");
    scanf("%d %d",&a,&b);
    printf("\nprime Number is : ");

    for (int i = a; i <= b; i++)
    {
        int c=0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
            
        }
        if (c==2)
        {
            printf("%d ",i);
        }
        
    }

    
    return 0;
}