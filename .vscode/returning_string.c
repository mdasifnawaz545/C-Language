#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverse(int , char[]);
int main()
{
    char str[20];
    printf("Enter the string : ");
    gets(str);
    printf("Previous string is : %s\n",str);
    int len=strlen(str);
    char *st;
    st=reverse(len,str);    
    printf("Reverse string is : %s\n",st);
    return 0;
}
char* reverse(int len, char str[])
{
    for (int i = 0; i < len/2; i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    return str;
    
}