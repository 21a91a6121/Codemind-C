#include<stdio.h>
int main()
{
    int number,sum=0,rem,temp;
    scanf("%d",&number);
    temp=number;
    while(number>0)
    {
        rem=number%10;
        sum=sum+rem;
        number=number/10;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}