#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    int i=m;
    for(int j=0;j<n;j++)
    {
        c[i]=b[j];
        i++;
    }
    for(int i=0;i<m+n;i++)
    {
        printf("%d ",c[i]);
    }
}