#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    char b[1000];
    gets(a);
    gets(b);
    int c=strlen(a);
    int d=strlen(b);
    printf("%d %d",c,d);
    printf("\n");
    for(int i=0;i<strlen(a);i++)
    {
        printf("%c",a[i]);
    }
    for(int i=0;i<strlen(b);i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    for(int i=0;i<strlen(a);i++)
    {
        char m=a[0];
        a[0]=b[0];
        b[0]=m;
        printf("%c",a[i]);
    }
    printf(" ");
    for(int i=0;i<strlen(b);i++)
    {
        char m=a[0];
        b[0]=m;
        printf("%c",b[i]);
    }

}