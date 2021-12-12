#include<stdio.h>
#include<string.h>
int main()
{
    char temp[10];
    char name[6][10]={
        "Gobinda",
        "Prinyanka",
        "Nitesh",
        "Karan",
        "Goainda",
        "Riya"
    };

    printf("\nUnsorted Name list: \n");
    for(int i=0;i<6;i++)
    {
        printf("\n%s",name[i]);
    }

    //sorting 
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],temp);
            }
        }
    }

    printf("\n\n\nSorted list: ");
    for(int i=0;i<6;i++)
    {
        printf("\n%s",name[i]);
    }
}