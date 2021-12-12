#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    char message[20];
    // printf("Enter message: ");
    // gets(message);

    ptr=fopen("test.txt","w");
    fprintf(ptr,"Welcome to BCA",message);


    //fscanf(ptr,"%s",message);
    

    fclose(ptr);
    return 0;
}