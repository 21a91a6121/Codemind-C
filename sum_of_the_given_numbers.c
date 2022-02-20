#include<stdio.h>
int main()
{
    int i=1,number,x,y;
    scanf("%d",&number);
    while(i<=number)
    {
        scanf("%d%d",&x,&y);
        printf("%d
",x+y);
        i++;
    }
    return 0;
}