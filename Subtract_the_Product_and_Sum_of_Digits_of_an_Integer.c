#include<stdio.h>
int main()
{
    int num,r,temp,sum=1,s=0;
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        temp=sum*r;
        sum=temp;
        s=s+r;
        num=num/10;
    }
    printf("%d",sum-s);
    return 0;
}