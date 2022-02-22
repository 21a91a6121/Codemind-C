#include<stdio.h>
int main()
{
    int num,r,sum=0;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}