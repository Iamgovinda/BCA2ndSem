#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);  // a=2

    printf("Enter b: ");
    scanf("%d",&b);  //3

    printf("Before swap:\na=%d\nb=%d\n\n",a,b);
    a=a+b;    //a=5
    b=a-b;   //b=2
    a=a-b;   //a=3

    printf("After swap: \na=%d\nb=%d\n",a,b);
    
    
}