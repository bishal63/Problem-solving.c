#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    //printf("%d %d",max,min);
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            a[i]=max;
        }
        else if(a[i]==max)
        {
            a[i]=min;
        }
        printf("%d ",a[i]);
    }
}