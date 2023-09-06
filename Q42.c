#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void copy(char [],char []);
int main()
{
    char s1[20];
    char s2[20];
    gets(s1);
    copy(s1,s2);
    puts(s1);
    return 0;
}
void copy(char s1[],char s2[])
{
    int i=0;
    while (s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    puts(s2);
}