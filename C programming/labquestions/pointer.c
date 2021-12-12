#include<stdio.h>
int main()
{
    int num=100;  // assingning the value 100 to the variable num.

    printf("Before.\n");
    printf("______________________\n");
    printf("The value of num is %d\nThe address of %d is %p.\n",num,num,&num); // printing the value and address of num.

    int *ptr;  // declaring the pointer
    ptr=&num;  // assigning the address  of num to the pointer.

    printf("\nThe value of pointer is %d\nThe address of pointer is %p\n",*ptr,ptr);

    *ptr=101;  // a

    printf("\n\n\nAfter reassingning.");
    printf("\n______________________\n");  /* we are just changing the value of pointer. As pointer ptr holds the address of num the value of num is also changing without even touching the variable.*/

    printf("\nThe value of pointer is %d\nThe address of pointer is %p\n",*ptr,ptr);

    printf("\nThe value of num is %d\nThe address of %d is %p.\n",num,num,&num);


    return 0;
}