//take name, age and rollno of different person using structure.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct {
    char name[100];
    int roll_no;
    int marks;
    char remarks[50];
 } student;

 int main()
{
    student student1;
    printf("enter your name: ");
    scanf("%s",&student1.name);

    printf("Enter roll number: ");
    scanf("%d",&student1.roll_no);
     
    printf("Enter marks: ");
    scanf("%d",&student1.marks);

    printf("Enter remarks: ");
    scanf("%s",&student1.remarks);


    printf("Name: %s\n rollno: %d\n marks: %d\n remarks: %s\n",student1.name,student1.roll_no,student1.marks,student1.remarks);
    return 0;

 }
 