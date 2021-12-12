//WAP in c to read any monthnumber in integer &display month name in the word.

#include<stdio.h>
int main()
{
    char *monthname[12]={"january","February","March","April","May","June","July","August","September","October","November","December"};
    int monthnumber;

    start:
        printf("Enter the month's Number(1-12): ");
        scanf("%d",&monthnumber);
    
    if(monthnumber>0&&monthnumber<=12)
    {
        printf("Monthnumber %d represents the month %s.",monthnumber,monthname[monthnumber-1]);
    }
    else
    {
        printf("Please enter the number between 1 to 12.\n");
        goto start;
    }
    
}