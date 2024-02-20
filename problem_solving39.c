#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);
    //printf("%s",a);
    int m=strlen(a);
    //printf("%d",m);
    if(m>4)
    {
        printf("%c",a[0]);
        printf("%d",m-2);
        printf("%c",a[m-1]);
    }
    else
    {
        printf("%s",a);
    }
}