
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1; i<=4; i++)
    {
        for(k=4; k>=i; k--)
            printf(" ");
        for(j=i; j>=1; j--)
            printf("%d", j);
        
        if(j<i)
            for(l=j+2; l<=i; l++)
                printf("%d", l);
            
         printf("\n");
    }
    return 0;
}