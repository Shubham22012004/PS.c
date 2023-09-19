#include<stdio.h>
int main()
{
    char v;
    scanf("%c", &v);

    if(v=='a' || v=='A' || v=='e' || v=='E' || v=='i' || v=='I' || v=='o' || v=='O' || v=='u' || v=='U' )

       printf("character is vowel");
    else
       printf("not is vowel");

    return 0;
}