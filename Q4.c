/*WAP to convert given second into its equivalent hour, minute and second as per the
following format.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int hr,sec,min,second;
    printf("Enter the total time in second : ");
    scanf("%d",&second);
    hr=second/3600;
    min=(second-(hr*3600))/60;
    sec=(second-hr*3600-min*60);

    printf("%d hour %d min %d sec\n",hr,min,sec);
    return 0;
}
