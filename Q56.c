#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void display(int l,char *);
int main()
{
    int n, *ptr, *str, s[20];
    printf("Enter  a string : ");
    gets(s);
    int l=strlen(s);
    display(l,&s);
    return 0;
}
void display(int l,char *str)
{
    
    int vowel=0,constant=0;
    for (int i = 0; i < l ; i++)
    {
        if (*(str + i) == 'a' || *(str + i) == 'A' || *(str + i) == 'e' || *(str + i) == 'E' || *(str + i) == 'i' || *(str + i) == 'I' || *(str + i) == 'o' || *(str + i) == 'O' || *(str + i) == 'U' || *(str + i) == 'u')
        {
           vowel++;
        }
        else constant++;
    }
    printf("Vowel and consonants are : %d and %d",vowel,constant);
}