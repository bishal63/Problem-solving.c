#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            evensum=evensum+a;
        }
        else
        {
            oddsum=oddsum+a;
        }
    }
    printf("%d %d\n",evensum,oddsum);
}