#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void scan(char *name[], int *no);

struct profile
{
    char name[20];
    int number;
};
int main()
{
    struct profile asif;
    scan(&asif.name, &asif.number);
    printf("Your Name is : %s and Your Phone no. is : %d", asif.name, asif.number);
    return 0;
}
void scan(char *name[], int *no)
{
    printf("Enter Your Good Name : ");
    gets(name);
    printf("Enter Your Phone Number : ");
    scanf("%d", no);
    printf("Your Name is : %s and Your Phone no. is : %d",name, no);
}
