// WAP to delete a character from a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int del;
    char s[20],ch;
    printf("Enter string : ");
    gets(s);
    puts(s);
    printf("Enter the character you want to delete: ");
    scanf("%c",&ch);
    int l=strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i]==ch)
        {
           del=i;
        }
        
    }
    for (int i = del; i < l; i++)
    {
        s[i]=s[i+1];
    }
    puts(s);
    

    return 0;
}