#include<conio.h>
#include<stdio.h>

int main()
{
    int angle1,angle2,total;
    printf("enter angle 1 \t");
    scanf("%d",&angle1);
    printf("enter angle 2 \t");
    scanf("%d",&angle2);
    total = angle1+angle2;
    printf("angle 3 is %d",180-total);
}