#include<stdio.h>
#define PI 3.14
int main()
{
    float area,radius;
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("%0.2f",area);
    return 0;
}