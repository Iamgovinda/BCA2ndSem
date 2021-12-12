#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("newtext.txt","w");
    
    char message[20];

    printf("Enter the message that u want to insert: ");
    gets(message);

    fprintf(fptr,"%s",message);

    FILE *fptr2;
    fptr2=fopen("newtext.txt",'r');

    fputs( fptr2, "%s");
    

    fclose(fptr);
}