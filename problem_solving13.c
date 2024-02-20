#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first_digit=n/10;
    int last_digit=n%10;
    //printf("%d %d",first_digit,last_digit);
    if(first_digit%last_digit==0)
    {
        printf("yes");
    }
    else if(last_digit%first_digit==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}