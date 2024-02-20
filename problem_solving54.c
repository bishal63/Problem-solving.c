#include<stdio.h>
#include<string.h>
void mahabub()
{
    char a[10];
    scanf("%s",&a);
    //printf("%s",a);
    char b[10];
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}
int main()
{
    mahabub();
}