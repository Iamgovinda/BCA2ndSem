#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];

    printf("Enter the message: ");
    gets(name);

    printf("%s",name);

    printf("\n\n%s",strrev(name));



}