#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char []);
int main()
{
    char name[20];
    printf("Enter name : ");
    gets(name);
    puts(name);
    rev(name);
    return 0;
}
void rev(char name[])
{
    int l;
    l=strlen(name);
    for (int i = l; i >= 0; i--)
    {
        printf("%c",name[i]);
    }
    
}