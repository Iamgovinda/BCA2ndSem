//1. C program to read name and marks of n number of students and store them in a file.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int name[50];
    int num,marks;
    int i;

    printf("Enter the number of students: ");
    scanf("%d",&num);

    FILE *fptr;

    fptr=(fopen("cfileexample2.txt","w"));

    if(fptr==NULL)
    {
        printf("Error!!!");
        exit(1);
    }

    for(i=0;i<num;++i)
    {
        printf("Enter the name of student%d: ",i+1);
        scanf("%s",name);

        
        printf("Enter the marks gained by student%d: ",i+1);
        scanf("%d",&marks);

        fprintf(fptr,"Name%d: %s\tMarks%d: %d",i+1,name,i+1,marks);
    }

    fclose(fptr);
    return 0;
}