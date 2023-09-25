#include<stdio.h>
int main()
{
    int i; int j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=2*i-1; j++)
        {
            printf("%c", i+64);
            
        }
        printf("\n");
    }
    return 0;

}