#include<stdio.h>
int main()
{
    int i,num,a=0,b=1,c;
    printf("%d %d ",a,b);
    c=a+b;
    scanf("%d",&num);
    for(i=3;i<=num;i++)
    {
        printf("%d ",c);
        a=b,
        b=c,
        c=a+b;
    }
}