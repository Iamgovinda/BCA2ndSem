#include<stdio.h>
#include<stdlib.h>


struct students{
    char name[20];
    int rollno;
    char address[30];
    int marks;
};

int main(void)
{ 
    struct students s[35];
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

        printf("\nEnter marks: ");
        scanf("%d",&s[i].marks);

    }
    
    printf("\n\n");
    //This is for displaying their datas
    printf("Students who obtained marks greater than 250 are: \n");
    for(int i=0;i<35;i++)
    {
        if(s[i].marks>250)
        {
            printf("\nName: %s\nRoll Number: %d\nAddress: %s\nObtained marks: %d.",s[i].name,s[i].rollno,s[i].address,s[i].marks);
            printf("\n");
        }
    }
}