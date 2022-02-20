#include<stdio.h>
int main()
{
    int number,m,rem1,rem2,sum1=0,sum2=0,n;
    scanf("%d",&number);
    m=number*number;
    while(number>0)
    {
        rem1=number%10;
        sum1=sum1*10+rem1;
        number=number/10;
    }
    n=sum1*sum1;
    while(n>0)
    {
        rem2=n%10;
        sum2=sum2*10+rem2;
        n=n/10;
    }
    if(sum2==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}