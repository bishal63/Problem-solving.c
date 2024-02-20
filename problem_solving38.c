#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);
    //printf("%s",a);
    char b[1000];
    strcpy(b,a);
    //printf("%s %s",a,b);
    strrev(b);
    //printf("%s",b);
    if(strcmp(a,b)==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}