#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;

    char message[30];
    printf("Enter the message: ");
    scanf("%s",&message);

    ptr=fopen("Test.txt","w");

    fprintf(ptr,"%s",message);

    fclose(ptr);
    return 0;
}