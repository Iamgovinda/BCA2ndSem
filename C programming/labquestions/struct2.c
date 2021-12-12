#include<stdio.h>

typedef struct 
{
    int length;
    int breadth;
    int height;

    int area,volume;
}rectangle;

int main()
{
    rectangle rectangle1,rectangle2;
    printf("Enter the length of rectangle1: ");
    scanf("%d",&rectangle1.length);

    printf("Enter the breadth of rectangle1: ");
    scanf("%d",&rectangle1.breadth);

    printf("Enter the height of rectangle1: ");
    scanf("%d",&rectangle1.height);


    printf("\n\n");
    printf("Enter the length of rectangle2: ");
    scanf("%d",&rectangle2.length);

    printf("Enter the breadth of rectangle2: ");
    scanf("%d",&rectangle2.breadth);

    printf("Enter the height of rectangle2: ");
    scanf("%d",&rectangle2.height);


    


    
}
