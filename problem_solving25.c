#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int value;
    scanf("%d",&value);
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            ans=i;
            break;
        }
    }
    printf("%d",ans);
}