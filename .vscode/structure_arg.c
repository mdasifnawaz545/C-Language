#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    int age;
    float marks;
};
void display(char name[],int roll_no, int age,float mark);
int main()
{
    // struct student *ptr=(struct student*)malloc(sizeof(struct student)); Not Working Why..?
    struct student s;
    printf("Enter the name : ");
    gets(s.name);
    printf("Enter the roll : ");
    scanf("%d", &s.roll);
    printf("Enter the age : ");
    scanf("%d", &s.age);
    printf("Enter the marks : ");
    scanf("%f", &s.marks);
    display(s.name,s.roll,s.age,s.marks);
    return 0;
}
void display(char name[],int roll_no, int age,float mark)
{
    printf("%s %d %d %.2f",name,roll_no,age,mark);
}
