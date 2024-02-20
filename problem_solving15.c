#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int evencount=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        //printf("%d",a);
        if(a%2==0)
        {
            //evencount++;
            printf("even-%d ",a);
        }
        else if(a%2==1)
        {
            printf("odd-%d ",a);
        }
    }
    //printf("%d",evencount);
}