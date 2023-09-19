#include<stdio.h>
int main()
{
    int d, m, yr,c, year, wkd;
    scanf("%d%d%d", &d, &m, &year );
    yr= year%100;
    c=year/100;
    printf("%d %d %d %d %d",d,m,year,yr,c);
    if(m==1 || m==2)
    {  
         m=m+10;
    }
    else 
    {    
        m=m-2;
    }
    printf("\n");
    printf("%d\n", m);

    wkd=(d+((13*m-1)/5)+yr+ (yr/4)+ (c/4)- (2*c))%7;
    printf("%d\n", wkd);
    switch(wkd)
    {
        case 0:
        {
            printf("SUNDAY");
            break;
        }
        case 1:
        {
            printf("MONDAY");
            break;
        }
        case 2:
        {
            printf("tuesday");
            break;
        }
        case 3:
        {
            printf("wednesday");
            break;
        }
        case 4:
        {
            printf("thrusday");
            break;
        }
        case 5:
        {
            printf("friday");
            break;
        }
        case 6:
        {
            printf("saturday");
            break;
        }
        default:
        {
            printf("wrong entry");
        }

    }
    return 0;

}