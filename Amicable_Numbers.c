#include<stdio.h>
int main()
{
    int n,m,i,fds=0,sds=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        fds=fds+i;
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        sds=sds+i;
    }
    if((n==sds) && (m==fds))
    printf("Amicable");
    else
    {
        printf("Not Amicable");
    }
}
