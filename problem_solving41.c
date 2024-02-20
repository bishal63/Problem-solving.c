#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    char b[1000];
    gets(a);
    gets(b);
    int c=strcmp(a,b);
    if(c<0)
    {
        printf("%s",a);
    }
    else if(c>0)
    {
        printf("%s",b);
    }
    else if(c==0)
    {
        printf("%s",b);
    }

}