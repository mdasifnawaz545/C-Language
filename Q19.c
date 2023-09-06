// Sorting
#include<stdio.h>
#include<stdlib.h>
void inc(int , int []);
void dec(int , int []);
int main()
{
    int *ptr,n,choice;
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    printf("Select the Sorting type : \n");
    printf("1.Ascending\n");
    printf("2.Decending\n");
    scanf("%d",&choice);
    if (choice==1)
    {
       inc(n,a);
    }
    else dec(n,a);
    return 0;
}
void inc(int n,int a[])
{
    for (int i = 0; i < n; i++)
    {
       printf("Enter %d Element : \n",i+1);
       scanf("%d",&a[i]);
    }
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("\nArray After : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
void dec(int n,int a[])
{
    for (int i = 0; i < n; i++)
    {
       printf("Enter %d Element : ",i+1);
       scanf("%d",&a[i]);

    }
    printf("\nArray is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("\nArray After : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}