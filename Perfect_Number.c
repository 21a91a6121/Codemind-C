#include<stdio.h>
int main()
{
    int number,i,rem,sum=0;
    scanf("%d",&number);
    for(i=1;i<=(number-1);i++)
    {
        rem=number%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==number)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}