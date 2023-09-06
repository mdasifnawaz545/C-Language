#include<stdio.h>
void display(int*);
int main()
{
    char str[20];
    gets(str);
    // char *ptr=&str[0];
    display(&str);
    return 0;
}
void display(int *ptr)
{
    int i=0;
while ((*ptr+i)!='\0')
{
    printf("%c ",*(ptr+i));
    i++;
}

    
}
