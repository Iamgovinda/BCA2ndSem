#include<stdio.h>
#include<string.h>
void start();
void security(char name[15],char password[15]);
int main()
{
    start();
}

void start()
{
    {
        
        printf("\n************************************************************************************************");
        printf("\n************************************************************************************************");
        printf("\n************************************************************************************************");
            printf("\n\t*****************************PHONEBOOK APPLICATION********************************");
        printf("\n************************************************************************************************");
        printf("\n************************************************************************************************");
        printf("\n************************************************************************************************");
        char name[15],password[15];
        printf("\nEnter username: ");
        scanf("%s",&name);
        printf("\nEnter password: ");
        scanf("%d",&password);
        security(char name[15],char password[15]);
    
    }
}

void security(char username[15],char password[15])
{
    if((strcmp(username,"Gobinda")==0))
    {
        if((strcmp(password,"loveufuchhi")))
        {
            printf("You are eligible........"); 
        }
    }
}