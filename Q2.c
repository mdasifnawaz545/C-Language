// WAP to enter the details of a student by using pointer in structure.
#include <stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int roll;
    double mb;
};
void read(int, struct student *);
void display(int, struct student *);
int main()
{
    int n;
    printf("Enter the size of the student : ");
    scanf("%d", &n);
    struct student *ptr;
    ptr = (struct student *)malloc(n * sizeof(struct student));
    struct student s[n];
    struct student *p;
    p=s;
    read(n, p);
    printf("The details of the student are : \n");
    display(n, p);
    return 0;
}
void read(int n, struct student *p)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Enter the name : ");
        gets(p[i].name);
        printf("Enter the roll : \n");
        scanf("%d", &p[i].roll);
        printf("Enter the phone nummber : ");
        scanf("%lf", &p[i].mb);
    }
}
void display(int n, struct student *p)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name : %s\n", p->name);
        printf("Roll : %d\n", p->roll);
        printf("Name : %lf\n", p->mb);
    }
}
