#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("max-%d ",a);
    }
    else if(b>a && b>c)
    {
        printf("max-%d ",b);
    }
    else
    {
        printf("max-%d ",c);
    }
    if(a<b && a<c)
    {
        printf("min-%d",a);
    }
    else if(b<a && b<c)
    {
        printf("min-%d",b);
    }
    else
    {
        printf("min-%d",c);
    }
}