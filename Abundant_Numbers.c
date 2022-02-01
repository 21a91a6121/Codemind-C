#include<stdio.h>
int main()
{
    int num,fac,i=0;
    scanf("%d",&num);
    for(fac=1;fac<num;fac++)
    {
        if(num%fac==0)
        i=i+fac;
    }
    if(i>num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}