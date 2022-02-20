#include<stdio.h>
int main()
{
    int number,sum=0,rem;
    scanf("%d",&number);
    while(number>0)
    {
        rem=number%10;
        sum=sum*10+rem;
        number=number/10;
    }
    printf("%d",sum);
    return 0;
}