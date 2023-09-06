#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(int , char*);
int main()
{
    char s[20],*str;
    printf("Enter string : ");
    gets(s);
    int l=strlen(s);
    reverse(l,&s);
    return 0;
}
void reverse(int l, char* str)
{
    for (int i = 0; i < l/2; i++)
    {
        char temp;
        temp=*(str+i);
        *(str+i)=*(str +l-1-i);
        *(str +l-1-i)=temp;

    }
    for (int i = 0; i < l; i++)
    {
        printf("%c",*(str+i));
    }
    
}
