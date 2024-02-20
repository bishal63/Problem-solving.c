#include<stdio.h>
int main()
{
    int n,space,number;
    scanf("%d",&n);
    space=n-1;
    number=1;
    for(int i=1;i<=n*2-1;i++)
    {
        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=number;i++)
        {
            printf("%d",i);
        }
        if(i<=n-1)
        {
            space--;
            number=number+2;
        }
        else
        {
            space++;
            number=number-2;
        }
        printf("\n");
    }
    
}