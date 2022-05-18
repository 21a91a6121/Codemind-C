#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[100];
    int i,l=0;
    scanf("%[^
]s",ch);
    for(i=0;ch[i]!=0;i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            l++;
        }
    }
    printf("%d",l);
}