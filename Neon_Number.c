#include<stdio.h>
int main()
{
    int num,sum=0,rem,s;
    scanf("%d",&num);
    s=num*num;
    while(s!=0)
    {
        rem=s%10;
        sum=sum+rem;
        s=s/10;
    }
    if(sum==num)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}