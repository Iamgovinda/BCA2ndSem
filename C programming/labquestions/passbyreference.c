#include<stdio.h>
int passbyreference(int *num)
{
    *num=20;
    return *num;
}
int main()
{
    int a=10;
    printf("Before calling the function,  a=%d.",a);
    passbyreference(&a);
    printf("\nAfter calling function, a=%d.",a);


}