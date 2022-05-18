#include<stdio.h>
#include<stdlib.h>
int main()
{
   char ch[100];
   scanf("%[^
]s",ch);
   int i,s=0;
   for(i=0;ch[i]!=0;i++)
   {
       if((ch[i]>='a' && ch[i]<='z'))
       {
           s++;
       }
   }
  printf("%d",s);
}