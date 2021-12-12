#include<stdio.h>
long long int factorial(long long int N)
{
    if(N==0||N==1)
    {
        return 1;
    }
    else
    {
        return N*factorial(N-1);
    }
}
int main()
{
    long long int num;
    printf("Enter the number to find the factorial of: ");
    scanf("%lli",&num);

    printf("%lli!==%lli.",num,factorial(num));
    return 0;
}