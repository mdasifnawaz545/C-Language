#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void length(char []);
int main()
{
    char name[20];
    int l=0;
    printf("Enter name : ");
    gets(name);
    length(name);
    return 0;
}
void length(char name[])
{
    int ln=0;
    int i=0;
while (name[i]!='\0')
{
    ln++;
    name++;
}

    printf("Length is %d",ln);
}
