#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ex(char []);
int main()
{
    char str[20];
    printf("Enter string : ");
    gets(str);
    ex(str);
    return 0;
}
void ex(char str[])
{
    int l=strlen(str);
    for (int i = 0; i <= l; i++)
    {
        if (str[i]==' ' || str[i]=='\0')
        {
            printf("%c ",str[i-1]);
        }
        
    }
    
}