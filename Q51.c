/*WAP to count the number of character,vowel ,alphabets,tabs,newllines,words*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int c=0,v=0,a=0,t=0,n=0,w=0;
    char s[20];
    gets(s);
    int l=strlen(s);
    for (int i = 0; i <= l; i++)
    {
        if (s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
        {
            c++;
            a++;
        }
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
           v++;
        }
        if (s[i] > '\t')
        {
            t++;
        }
        if (s[i]=='\n')
        {
            n++;
        }
        
        if (s[i]==' ' || s[i]=='\0')
        {
            w++;
        }
        
    }
    printf("c=%d a=%d v=%d n=%d w=%d t=%d",c,a,v,n,w,t);
    return 0;
}