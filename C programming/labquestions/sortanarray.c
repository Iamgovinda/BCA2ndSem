#include<stdio.h>
int main()
{
    int array[15]={
        1,23,1,2,3,24,2,4,3,53,2,45,32,12,35
    };

    printf("This is the unsorted array:");
    for(int i=0;i<15;i++)
    {
        printf("\n%d",array[i]);
    }

    //this is the logic to sort the array.
    
    for(int i=0;i<14;i++)
    {
        for(int j=i+1;j<15;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }


    //printing the sorted array
    printf("\n\nThe sorted array is:");
    for(int i=0;i<15;i++)
    {
        printf("\n%d",i);
    }
}