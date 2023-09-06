#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void caseu(int , char []);
int main()
{
    char s[20];
    printf("Enter string : ");
    gets(s);
    puts(s);
    int l=strlen(s);
    caseu(l,s);
    puts(s);
    return 0;
}
void caseu(int l, char s[])
{
    for (int i = 0; i < l; i++)
    {
        if (s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        if (s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
        
    }
    
}