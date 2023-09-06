#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ex(char[]);
char rev(char []);
int main()
{
    char str[20];
    char new_str[20];
    gets(str);
    puts(str);
    rev(str);
    puts(str);
    ex(str);
    // puts(str);
    // new_str;
    return 0;
}
char rev(char str[])
{
    int l=strlen(str);
    for (int i = 0; i < l/2; i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;

    }
    

}
void ex(char str[])
{
    int l = strlen(str);
     printf("%c ",str[0]);
    for (int i = 0; i < l; i++)
    {
        if (str[i]==' ' || str[i]=='\0')
        {
            printf("%c ",str[i-1]);
        }
        
    }
    
}