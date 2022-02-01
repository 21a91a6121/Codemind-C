#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,temp,i,j=0,tempo;
    scanf("%d",&num);
    temp=num;
    tempo=num;
    while(num!=0)
    {
        num=num/10;
        j++;
    }
    while(temp!=0)
    {
        i=temp%10;
        sum=pow(i,j)+sum;
        temp=temp/10;
        j--;
    }
    if(tempo==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}