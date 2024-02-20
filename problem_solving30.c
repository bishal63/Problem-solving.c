#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001]="LEVEL";
    char  t[1001]="ONE";
    int counts=0;
    for(int i=0;i<strlen(s);i++)
    {
        counts++;
    }
    printf("%d ",counts);
    int countt=0;
    for(int i=0;i<strlen(t);i++)
    {
        countt++;
    }
    printf("%d",countt);
    printf("\n");
    printf("%s %s ",s,t);
}