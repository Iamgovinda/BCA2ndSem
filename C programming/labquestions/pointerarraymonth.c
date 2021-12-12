#include<stdio.h>

char *monthname(int n)
{
    static char *name[]=
    {
        "Illigal month","January","February","March","April","May","June","July","August","September","November","December"
    };
    return (n<1||n>12)?name[0]:name[n];
}

int main()
{
    int mn;
    printf("Enter monthnumber: ");
    scanf("%d",&mn);

    printf("Monthnumber %d represents the month %s",mn,monthname(mn-1));
}