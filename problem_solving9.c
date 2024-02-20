#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    //printf("%d",n);
    if(n>=65 && n<=90)
    {
        printf("alphabet\nis capital");
    }
    else if(n>=97 && n<=122)
    {
        printf("alphabet\nis small");
    }
    else if(n>=48 && n<=57)
    {
        printf("digit");
    }
}