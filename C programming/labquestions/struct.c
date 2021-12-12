#include<stdio.h>
int main()
{
    char *monthname[12]={"january","February","March","April","May","June","July","August","September","October","November","December"};
    int monthnumber;

    printf("Enter the month's Number: ");
    scanf("%d",&monthnumber);

    printf("Monthnumber %d represents the month %s.",monthnumber,monthname[monthnumber-1]);
}