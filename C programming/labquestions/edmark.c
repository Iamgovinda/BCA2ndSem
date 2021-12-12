#include<stdio.h>
int main()
{
    FILE *ptr;

    ptr=fopen("test.txt","w");
    fprintf(ptr,"Welcome to BCA");

    fclose(ptr);
    return 0;
}