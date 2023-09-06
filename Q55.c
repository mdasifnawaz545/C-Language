#include<stdio.h>
#include<string.h>
void display(char *);
int main()
{
    char name[20];
    gets(name);
    char *str;
    str=name;
    display(&name);
    return 0;
}
void display(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
    printf("%c ",*(str+i));
        /* code */
    }
    
}
