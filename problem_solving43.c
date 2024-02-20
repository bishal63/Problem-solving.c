#include<stdio.h>
int main()
{
    int a,star;
    scanf("%d",&a);
    star=a*2;
    for(int i=a;i>=1;i--)
    {
        for(int i=0;i<star;i=i+2)
        {
            printf("*");
        }
        star=star+2;
        printf("\n");
    }
}