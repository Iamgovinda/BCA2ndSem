//question no.1
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);


    if((num%3==0)&&(num%7==0))
    {
        printf("%d is multiple of 3 and 7 both.",num);
    }
    else
    {
        if(num%3==0)
        {
            printf("%d is multiple of 3.",num);
        }
        else if(num%7==0)
        {
            printf("%d is multiple of 7.",num);
        }
        else
        {
            printf("Number is neither multiple of 3 nor of 7.");
        }
    }
    
    return 0;
}