#include<stdio.h>
int main()
{
    int i,j, n;
    for(i=1; i<=5; i++)
    {
        for(j=i; j>=1; j--)
        {
            printf("%c", 70-j);
        }
        printf("\n");
    }   
}