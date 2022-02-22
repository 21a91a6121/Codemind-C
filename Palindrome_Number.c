#include<stdio.h>
int main()
{
    int num,a,b,i,sum,r;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=0;
        scanf("%d",&a);
        b=a;
        while(a>0)
        {
            r=a%10;
            sum=sum*10+r;
            a=a/10;
        }
        if(sum==b)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}