#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char []);
int main()
{
    char str[20];
    printf("Enter sstring : ");
    gets(str);
    reverse(str);
    return 0;
}
void reverse(char str[])
{
    int l=strlen(str);
    for (int i = 0; i < l/2; i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    puts(str);
}