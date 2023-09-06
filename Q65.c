#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s1[20],a=0,e=0,i=0,o=0,u=0;
    printf("Enter string : ");
    gets(s1);
    int l=strlen(s1);
    for (int i = 0; i < l; i++)
    {
        if (s1[i]=='a' || s1[i]=='A')
        {
            a++;
        }
        if (s1[i]=='e' || s1[i]=='E')
        {
            e++;
        }
        if (s1[i]=='i' || s1[i]=='I')
        {
            i++;
        }
        if (s1[i]=='o' || s1[i]=='O')
        {
            o++;
        }
        if (s1[i]=='u' || s1[i]=='U')
        {
            u++;
        }
        
    }
    printf("a : %d\n",a);
    printf("e : %d\n",e);
    printf("i : %d\n",i);
    printf("o : %d\n",o);
    printf("u : %d\n",u);
    return 0;
}