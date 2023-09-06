#include<stdio.h>
#include<string.h>
int main()
{
    void *ptr;
    int roll=22052736;
    char name[20]={"md"};
    float salary=256000.78;
    ptr=&roll;
    printf("Roll number is %d\n", *((int*) ptr));
    // ptr=&name;
    // printf("Name is %s\n", *((char*) ptr));
    ptr=&salary;
    printf("Salary is %f\n", *((float*) ptr));
    return 0;
}