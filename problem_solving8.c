#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n/1000;
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    } 
}