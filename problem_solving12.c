#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0,odd=0,positive=0,negative=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
            //printf("even-%d\n",a);
        }
        else if(a%2==1 || a%2==-1)
        {
            odd++;
            //printf("odd-%d\n",a);
        }
        if(a>0)
        {
            positive++;
        }
        else if(a<0)
        {
            negative++;
        }
    }
    printf("even-%d\nodd-%d\npositive-%d\nnegative-%d\n",even,odd,positive,negative);
}