//write a c program to enter 30 employees age into array and find out second largest age.
//write a c program to store 10 integers in to the memory and find minimum and maximum using DMA.'
//write a c program to generate up to 13th term fabonacci series in c using recursive function.
//write a c program to swap the value using the third variable.
// write a c program to enter id,name and address of 25 employees into the structure variable called employee and sort them into the ascending order on
//basis of thier name using pointer.



#include<stdio.h>
int main()
{
    int max,temp;
    int employeeage[10];
    
    for(int i=0;i<10;i++)
    {
        printf("Enter the age of employee%d: ",i+1);
        scanf("%d",&employeeage[i]);
    }
    int i=0;
    max=employeeage[0];

    for(i=0;i<10;i++)
    {
        if(max<employeeage[i])
        {
            max=employeeage[i];
        }
    }
    temp=employeeage[0];

    for(i=0;i<10;i++)
    {
        if(temp<employeeage[i]&&employeeage[i]<max)
        {
            temp=employeeage[i];
        }
    }


    printf("Largest age: %d.\nSecond Largest age: %d.",max,temp);


}