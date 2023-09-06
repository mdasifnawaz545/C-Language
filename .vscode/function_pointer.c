#include<stdio.h>
void star(int);
int main()
{
    int r;
    printf("Enter the no. of rows : ");
    scanf("%d",&r);
    void (*ptr)(int);
    ptr=star;
    (*ptr)(r);
    return 0;
}
void star(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < r; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}