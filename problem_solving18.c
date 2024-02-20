#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            //evencount++;
            evencount=evencount+i;
        }
        else
        {
            //oddcount++;
            oddcount=oddcount+i;
        }
    }
    printf("%d %d\n",evencount,oddcount);
}