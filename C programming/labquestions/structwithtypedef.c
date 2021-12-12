//take name, age and rollno of different person using structure.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct person
 {
    char name[100];
 }person;

 int main()
{
    person *temp;
    int N=10;
    temp=(person *)malloc(N*sizeof(person));

    printf("Enter name: ");
    scanf("%s",(temp)->name);

    


}
 