
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name[10][20],temp[20];
    int n;
    printf("Enter number of name : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter name  : ");
        gets(name[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(name[i],name[j]>0))
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        puts(name[i]);
    }
    
    return 0;
}