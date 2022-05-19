#include<stdio.h>
int main()
{
    int arr[100],n,i,s1=0,s2=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i+=2)
    {
        s1=s1+arr[i];
    }
    for(i=0;i<n;i+=2)
    {
        s2=s2+arr[i];
    }
    d = (s1>s2)?(s1-s2):(s2-s1);
    printf("%d",d);
    return 0;
}