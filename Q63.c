#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void palid (int , char []);
int main()
{
    char s[20];
    printf("Enter string : ");
    gets(s);
    int l=strlen(s);
    {
    int flag=0,palin=0;
    for (int i = 0; i < l; i++)
    {
        if (s[i]!=s[l-i-1])
        {
            flag=1;
        }
        
    }
    if (flag==1)
    {
                    printf("It is not a palindrome string\n");

    }
    if (flag==0)
    {
       printf("It is a palindrome string.");
    }
    
    
}
    return 0;
}
// void palid (int l, char s[])

