#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void palin(int , char []);
int main()
{
    char str[20],string;
    printf("Enter the string : ");
    gets(str);
    int len=strlen(str);
    palin(len,str);

    return 0;
}
void palin(int len, char str[])
{
    int palin=0,flag=0;
    for (size_t i = 0; i < len; i++)
    {
        if (str[i]==str[len-1-i])
        {
            palin++;
        }
        else flag++;
    }
    if (palin==len)
    {
                printf("It is a palindrome string.");

    }
    
    else if (flag>=1)
    {
        printf("It is not a palindrome string.");
    }
       
}
