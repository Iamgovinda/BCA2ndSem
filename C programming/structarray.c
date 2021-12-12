#include<stdio.h>
#include<stdlib.h>


struct students{
    char name[20];
    int rollno;
    int address[30];
};

int main(void)
{ 
    struct students s[5];
    //this is for taking data of students......
    for(int i=0;i<5;i++)
    {
        s[i].rollno=i+1;
        printf("\nEnter data for student having rollno: %d.",s[i].rollno);

        printf("\nEnter name: ");
        scanf("%s",&s[i].name);

        fflush(stdin);

        printf("\nEnter address: ");
        scanf("%s",&s[i].address);

    }
    
    printf("\n\n");
    //This is for displaying their datas
    for(int i=0;i<5;i++)
    {
        printf("\nName: %s\nRoll Number: %d\nAddress: %s",s[i].name,s[i].rollno,s[i].address);
        printf("\n");
    }
}