//write a c program to store 10 integers in to the memory and find minimum and maximum using DMA.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i;

    int min,max;

    ptr=(int *)malloc(10*sizeof(int));

    for(i=0;i<10;i++)
    {
        printf("Enter interger%d: ",i+1);
        scanf("%d",ptr+i);
    }

    min=*ptr;
    max=*ptr;

    for(i=0;i<10;i++)
    {
        if(max<*(ptr+i))
        {
            max=*(ptr+i);
        }

        if(min>*(ptr+i))
        {
            min=*(ptr+i);
        }
    }

    printf("%d is max. %d is min",max,min);
    return 0;
}