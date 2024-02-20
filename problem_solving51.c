#include<stdio.h>
void mahabub(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    mahabub(a,b);
}