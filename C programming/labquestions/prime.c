#include<stdio.h>
int main()
{
    int num;
    int flag=0;
    scanf("%d",&num);

    if(num<=0)
    {
        printf("Neither prime not nonprime.");
    }
    else if(num==1)
    {
        printf("Non prime number.");
    }
    else if (num==2)
    {
        printf("Number is prime.");
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                printf("Number is not prime.");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("number is prime!");
        }
    }
    return 0;    
}