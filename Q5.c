/*WAP to convert a quantity in meter entered through keyboard into its equivalent
kilometer and meter as per the following format. Example. 2430 meter = 2 Km and 430
meters.*/
#include<stdio.h>
int main()
{
    int meter,km;
    printf("Enter the total meter : ");
    scanf("%d",&meter);
    km=meter/100;
    meter=meter%1000;
    printf("%d km %d m",km,meter);
    return 0;
}