#include<stdio.h>
int main()
{
    int n,space,number;
    scanf("%d",&n);
    space=n-1;
    number=1;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=number;i++)
        {
            printf("%d",number);
        }
        space--;
        number++;
        printf("\n");
    }
}