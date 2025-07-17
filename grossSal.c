#include <conio.h>
#include <stdio.h>

int main()
{
    int baseSal, HRA, DA, TA;
    printf("enter base salary \t");
    scanf(" %d", &baseSal);
    printf("enter HRA \t");
    scanf(" %d", &HRA);
    printf("enter DA \t");
    scanf(" %d", &DA);
    printf("enter TA \t");
    scanf(" %d", &TA);
    HRA = ((float)HRA / baseSal) * 100;
    DA = ((float)DA / baseSal) * 100;
    TA = ((float)TA / baseSal) * 100;
    printf("gross salary is %d", baseSal + HRA+TA+DA);
}