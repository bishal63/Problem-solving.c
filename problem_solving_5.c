#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=10000)
    {
        if(n>20000)
        {
            printf("Gucci belt\n");
        }
        printf("Gucci bag");
    }
    else if(n>=5000)
    {
        printf("Levis bag");
    }
    else
    {
        printf("Something");
    }

}
