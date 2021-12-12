#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a;
    puts("Enter a char: ");
    scanf("%c",&a);


    if(a>64&&a<91)
    {
        a=a+32;
    }
    else if(a>96&&a<=122)
    {
        a=a-32;
    }else
    {
        printf("Enter the alphabet.");
    }

    printf("%c=%d",a,a);
}