#include<stdio.h>
void mahabub(int a[],int n)
{
    int countodd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            countodd++;
        }
    }
    printf("%d",countodd);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mahabub(a,n);
}