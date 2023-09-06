#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[20];
    gets(s);
    puts(s);
    int l=strlen(s);
    printf("%d",l);
    return 0;
}