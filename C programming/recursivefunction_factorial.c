#include<stdio.h>

unsigned long long factorial(int num);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    
    printf("%d!=%llu",n,factorial(n));
    
    return 0;
}

unsigned long long factorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    else{
        return num*factorial(num-1);
    }


}