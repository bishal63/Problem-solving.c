/*#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int space=4;
    int star=1;
    for(int i=0;i<a;i++)
    {
        for(int i=0;i<space;i++)
        {
            printf(" ");
        }
        for(int i=0;i<star;i++)
        {
            printf("*");
        }
        space--;
        star++;
        printf("\n");
    }
}*/

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    //int space=4;
    int star=a;
    for(int i=0;i<a;i++)
    {
        /*for(int i=0;i<space;i++)
        {
            printf(" ");
        }*/
        for(int i=0;i<star;i++)
        {
            printf("*");
        }
        //space--;
        star--;
        printf("\n");
    }
}