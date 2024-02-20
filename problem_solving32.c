#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000001];
    scanf("%s",&c);
    int sum=0;
    for(int i=0;i<strlen(c);i++)
    {
        sum=sum+c[i]-48;
    }
    printf("%d",sum);
}