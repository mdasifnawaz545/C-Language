#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read(int,int *);
void sort(int , int *);

int main()
{
    int n;
    int *ptr,*str;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    read(n,&a);
    sort(n,&a);
    return 0;
}
void read(int n,int *str)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",str+i);        
    }
    printf("\nArray Before : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(str+i));
        
    }
    printf("\n");

}
void sort(int n,int *str)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(str+i)>*(str+j))
            {
                int temp;
                temp=*(str+i);
                *(str+i)=*(str+j);
                *(str+j)=temp;
            }
            
        }
        
    }
    printf("\nArray After : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(str+i));
        
    }
    
}