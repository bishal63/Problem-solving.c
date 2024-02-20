#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div=a*1.0/b*1.0;
    printf(" %d\n %d\n %d\n %0.2f\n",sum,sub,mul,div);
}