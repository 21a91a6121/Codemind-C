#include<stdio.h>
int main()
{
    int i,number;
    scanf("%d",&number);
    int a=0,b=0,c=1;
    if(number==0||number==1)
    printf("True");
    while(a<number)
    {
        a=b+c;
        b=c;
        c=a;
    }
    if(a==number)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}