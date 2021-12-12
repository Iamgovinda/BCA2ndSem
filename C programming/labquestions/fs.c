#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    FILE *ptr;
    char msg[20];

    printf("Enter the message: ");
    gets(msg);

    ptr=fopen("gs.txt","w");

    fprintf(ptr,"%s",msg);

    fscanf(ptr,"%s",msg);
    fclose(ptr);
}