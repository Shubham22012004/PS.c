#include<stdio.h>
int main()
{
    int i; int j;
    for(i=1; i<=4; i++)
    {
        for(j=i; j<=2*i-1; j++)
        {
            printf("%c", j+64);
            
        }
        printf("\n");
    }
    return 0;
}