#include<stdio.h>
int main()
{
    int number,rem,largest=0;
    scanf("%d",&number);
    while(number>0)
    {
        rem=number%10;
        if(largest<rem)
        {
            largest=rem;
        }
        number=number/10;
    }
    printf("%d",largest);
    return 0;
}