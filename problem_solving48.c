#include<stdio.h>
#include<string.h>
void mahabub(char a[])
{
    int count=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>count)
        {
            count++;
        }
    }
    printf("%d",count);
}
int main()
{
    char a[100];
    scanf("%s",&a);
    mahabub(a);
}