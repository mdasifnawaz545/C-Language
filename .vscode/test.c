#include<stdio.h>
int main()
{
    int n,c=0;
    int a[n],b[c];
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            c++;
            b[i]=a[i];
        }
        
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d ",b[i]);
        
    }
    
    return 0;
}