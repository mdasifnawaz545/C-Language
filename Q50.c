#include<stdio.h>
void ex(int ,char []);
void rev(int ,char []);
int main()
{
    char str[20];
    printf("Enter string : ");
    gets(str);
    int l=strlen(str);
    puts(str);
    rev(l,str);
    // puts(str);
    ex(l,str);
    return 0;
}
void rev(int l,char str[])
{
    for (int i = 0; i < l/2; i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    


}
void ex(int l,char str[])
{
for (int i = 0; i <=l ; i++)
{
    if (str[i]==' '|| str[i]=='\0')
    {
        printf("%c ",str[i-1]);
    }
    
}



}

