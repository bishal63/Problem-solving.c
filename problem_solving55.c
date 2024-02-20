#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    if(a[i]<0)
    {
        printf("%d ",a[i]);
    }
    printf("%d",count);
}