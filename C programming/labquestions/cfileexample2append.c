#include<stdio.h>
#include<stdlib.h>
int main()
{
    int name[50];
    int num;
    int marks;

    printf("Enter the number of the students: ");
    scanf("%d",&num);

    FILE *fptr;
    fptr=fopen("cfileexample2.txt","a");

    if(fptr=NULL)
    {
        printf("Error!");
        exit(1);
    }

    for(int i=0;i<num;++i)
    {
        printf("For stduent%d\nName: ");
        scanf("%s",name);

        printf("marks: ");
        scanf("%d",&marks);

        fprintf(fptr,"Name%d: %s\tMarks%d: %d",i+1,name,i+1,marks);
    }
    fclose(fptr);
    return 0;
}