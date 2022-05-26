#include<stdio.h>
int main()
{
    int n,r,s=0,i,a[100],c=0,j,temp,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        s=0;
        while(a[i])
        {
            r=a[i]%10;
            s=(s*10)+r;
            a[i]=a[i]/10;
        }
        if(s==t)
        c++;
    }
    printf("%d",c);
}