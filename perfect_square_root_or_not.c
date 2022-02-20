#include<stdio.h>
int main()
{
    int number,temp,i=1,s=0,p;
    scanf("%d",&number);
    temp=number;
    while(i<number/2)
    {
        s=i*i;
        if(s==temp)
        {
            p=1;
        }
        i++;
    }
    if(p==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}