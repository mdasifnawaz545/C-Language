#include<stdio.h>
int* return_pointer(int , int []);

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d elements are : %d\n",i+1,arr[i]);
    }
    // Increment of the array by using or by the help of the pointer.
    int *ptr;
    ptr=return_pointer(5,arr);
    printf("Array element after increment is %d\n",*ptr);
    return 0;
}
int* return_pointer(int n, int arr[])
{
    arr=arr+3;
    return arr;
}