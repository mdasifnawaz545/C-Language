// Write a program to concatenate two strings without using any library function.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void tg(int ,int,char [],char[]);

int main()
{
    char s1[20]={"Mohammad Asif "},s2[20]={"Nawaz"};
    fflush(stdin);
    printf("Enter stirng 1 : ");
    gets(s1);
    int l1=strlen(s1);
    fflush(stdin);
    printf("Enter stirng 2 : ");
    gets(s2);
    int l2=strlen(s2);
    tg(l1,l2,s1,s2);
    return 0;
}
void tg(int l1,int l2,char s1[],char s2[])
{
    for (int i = 0; i <= l2 ; i++)
    {
       s1[l1+i]=s2[i];
    }
    puts(s1);
}
