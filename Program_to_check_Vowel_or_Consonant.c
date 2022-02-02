#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='O')||(ch=='U')||(ch=='E')||(ch=='I'))
    {
    printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}
