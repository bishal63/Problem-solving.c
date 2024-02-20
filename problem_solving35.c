#include<stdio.h>
int main()
{
    int i;
    char a[1000];
    //scanf("%s",a);
    //fgets(a,1000,stdin);
    gets(a);
    int m=strlen(a);
    if(m>13)
    {
        printf("%c",a[0]);
        printf("%d",m-1);
        printf("%c",a[m-1]);
    }
    else//for(int i=0;i<=m;i++)
    {
        printf("%c",a[i]);
    }
    
}