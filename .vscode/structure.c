#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void read(int , str [], str *);
void display(int , str [], str *);
typedef struct employee {
    char name[20];
    char gender[6];
    char designation[20];
    char department[15];
    float basic_pay;

}str;
int main()
{
    int n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
    str *ptr= (str*)malloc(n*sizeof(str));
    str emp[n];
    read(n,ptr,emp);
    return 0;
}
void read(int n, str emp[], str *ptr)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter the name of the %d employee : ",i+1);
        gets((ptr)(emp[i].name));
        fflush(stdin);
        printf("Enter the gender of the %d employee : ",i+1);
        gets((ptr)(emp[i].gender));
        fflush(stdin);
        printf("Enter the designation of the %d employee : ",i+1);
        gets((ptr)(emp[i].designation));
        fflush(stdin);
        printf("Enter the department of the %d employee : ",i+1);
        gets((ptr)(emp[i].department));
        printf("Enter the basic_pay of the %d employee : ",i+1);
        scanf("%d",&(ptr)(emp[i].basic_pay));
    }
    
}
void display(int n, str emp[], str *ptr)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name of the %d Employee is : %s",i+1,*((ptr)(emp[i].name)));
        printf("Gender of the %d Employee is : %s",i+1,*((ptr)(emp[i].gender)));
        printf("Designation of the %d Employee is : %s",i+1,*((ptr)(emp[i].designation)));
        printf("Department of the %d Employee is : %s",i+1,*((ptr)(emp[i].department)));
        printf("Basic pay of the %d Employee is : %s",i+1,*((ptr)(emp[i].basic_pay)));
    }
    
}
