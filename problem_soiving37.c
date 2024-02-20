#include<stdio.h>
#include<string.h>
int main()
{
    /*char m='a';
    printf("%d",m);*/
    char n[1000];
    scanf("%s",&n);
    int count[26]={0};
    for(int i=0;i<strlen(n);i++)
    {
        int value=n[i]-97;
        count[value]++;    
    }
    for(int i=0;i<=25;i++)
    {
        printf("%c:%d\n",i+97,count[i]);
    }

}