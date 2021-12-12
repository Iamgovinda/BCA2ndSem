#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    char name[20];
    int age;
    char address[20];
    char sex[5];
    long int mobile;
    char mail[100];    

} person;
int main()
{
    person p;
    printf("Enter your name: ");
    gets(p.name);

    printf("Enter your address: ");
    gets(p.address);

    printf("Enter your sex: ");
    gets(p.sex);

    printf("Enter your age: ");
    scanf("%d",&p.age);

    printf("Enter your number: ");
    scanf("%ld",&p.mobile);

    fflush(stdin);
    printf("Enter your mail: ");
    gets(p.mail);


    printf("\n##########################\nInformation\n");
    printf("\nName: %s\nAddress: %s\nSex: %s\nAge: %d\nMobile no: %d\nMail: %s.",p.name,p.address,p.sex,p.age,p.mobile,p.mail);

}