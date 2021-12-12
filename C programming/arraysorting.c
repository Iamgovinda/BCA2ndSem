#include<stdio.h>
#include<stdlib.h>
// this block of code is for ascending the array.
int ascend(int *arr)
{
    int temp;
    for(int i=0;i<=sizeof(arr);i++)
    {
        for(int j=i+1;j<=sizeof(arr);j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

     for(int i=0;i<=sizeof(arr);i++)
     {
         printf("%d\n",arr[i]);
     }
}

//this block of code is for descending 

int descend(int *arr)
{
    int temp;
    for(int i=0;i<=sizeof(arr);i++)
    {
        for(int j=i+1;j<=sizeof(arr);j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<=sizeof(arr);i++)
    {
        printf("%d\n",arr[i]);
    }
}


int main()
{
    int array[5]={12,2,32,3,4};
    int *ptr=array;
    int value;
    printf("Enter 1 for ascending order and 2 for descending  order: ");
    scanf("%d",&value);

    switch (value)
    {
    case 1:
        ascend(ptr);
        break;

    case 2:
        descend(ptr);
        break;
    
    default:
        printf("Enter 1 or 2 only.");
        break;
    }
    return 0;

}

