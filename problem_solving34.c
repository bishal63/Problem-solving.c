#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    fgets(a,1000,stdin);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        else if(a[i]==',')
        {
            a[i]=' ';
        }
        printf("%c",a[i]);
    }
}