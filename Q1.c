#include <stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
} t1, t2, t3;
void read();
void display(struct time, struct time, struct time);
int main()
{
    read(t1, t2);
    display(t1, t2, t3);
    return 0;
}
void read()
{
    printf("Enter time 1(hh:mm:ss) : ");
    scanf("%d %d %d", &t1.hr, &t1.min, &t1.sec);
    printf("Enter time 2(hh:mm:ss) : ");
    scanf("%d %d %d", &t2.hr, &t2.min, &t2.sec);
}
void display(struct time t1, struct time t2, struct time t3)
{

    if (t1.hr+t2.hr >= 24)
    {
        int day;
        day = (t1.hr+t2.hr) / 24;
        t3.hr = (t1.hr + t2.hr + (t1.min + t2.min + (t1.sec + t2.sec) / 60) / 60) % 24;
        t3.min = (t1.min + t2.min + (t1.sec + t2.sec) / 60) % 60;
        t3.sec = (t1.sec + t2.sec) % 60;
        printf("%d Day %d Hour %d Min %d Sec\n", day, t3.hr, t3.min, t3.sec);
    }
    else
    {
        t3.hr = t1.hr + t2.hr + (t1.min + t2.min + (t1.sec + t2.sec) / 60) / 60;
        t3.min = (t1.min + t2.min + (t1.sec + t2.sec) / 60) % 60;
        t3.sec = (t1.sec + t2.sec) % 60;
        printf("%d Hour %d Min %d Sec\n",t3.hr, t3.min, t3.sec);

    }
}
