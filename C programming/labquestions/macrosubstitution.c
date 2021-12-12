#include<stdio.h>
#define max(A,B) ((A)>(B)?(A):(B))

int main()
{
    int num1,num2;
    printf("Enter the num1: ");
    scanf("%d",&num1);

    printf("Enter the num2: ");
    scanf("%d",&num2);

    printf("max is %d",max(num1,num2));
}