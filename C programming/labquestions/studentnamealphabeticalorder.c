#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr[5][10];
    char temp[10];

    for(int i=0;i<5;i++)
    {
        printf("Enter student name%d: ",i+1);
        gets(arr[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[i]);
                strcpy(arr[i],temp);
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("\n%s",arr[i]);
    }



}