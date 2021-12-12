//take name, age and rollno of different person using structure.
#include<stdio.h>
 typedef struct person
 {
    char name[100];
    int age;
    int rollno;
 }person;

 int main()
{
    person arniko[5];

    for(int i=0;i<2;i++)
    {
        printf("Enter name%d: ",i+1);
        scanf("%s",&arniko[i].name);

        printf("\nenter age%d: ",i+1);
        scanf("%d",&arniko[i].age);
        
        printf("\nenter rollno%d: ",i+1);
        scanf("%d",&arniko[i].rollno);
    }

    for(int i=0;i<2;i++)
    {
        printf("\nName of student%d: %s",arniko[i].name);
        printf("\nAge of student%d: %d",arniko[i].age);
        printf("\nrollno of student%d: %d",arniko[i].rollno);
    }
    return 0;
 }
 