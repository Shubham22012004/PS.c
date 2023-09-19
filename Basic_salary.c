#include<stdio.h>
int main()
{
    float ts, basic, hra, da, pf;
    int allow;
    char grade;
    printf("enter the basic salary: ");
    scanf("%f", &basic);
    printf("enter the grade: ");
    scanf(" %c", &grade);

    printf("\n");

    hra= 0.2*basic;
    da= 0.5*basic;
    pf=0.11*basic;

    if(grade=='A')
        allow=1700;
    else if(grade=='B')
        allow=1500;
    else
        allow=1300;

    ts= basic+hra+da+allow-pf;

    printf("total salary %f", ts);
    return 0;
        

}