#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);

    

    //in c there is a function strupr(*char) and strlwr(*char). to change the  cases of the word.

    //lets try without using the function.

    int i;
    for(i=0;i<strlen(name);i++)
    {
        if(name[i]>64&&name[i]<91)
        {
            name[i]=name[i]+32;// this is to convert to lower case of the letter.
        }
        else
        {
            name[i]=name[i]-32;
        }
    }

    printf("%s",name);
}