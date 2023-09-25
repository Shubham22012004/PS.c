#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1; i<=4; i++)
    {
        for(k=4; k>=i; k--)
        {
            printf(" ");
        }
        
        for(j=i; j<=2*i-1; j++)
        {
            printf("%d", j);
        }
        if(j>i+1)
        {
            for(l=j-1; l>i; l--)
            {
                printf("%d", l-1);
            }
        } 
        printf("\n");
    }
    return 0;
}