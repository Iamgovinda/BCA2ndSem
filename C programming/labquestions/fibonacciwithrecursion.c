#include<stdio.h>
int fibo(int N);
int main()
{
    int N;
    printf("Enter the number of terms: ");
    scanf("%d",&N);

    printf("The fibonacci series till %d terms are: ",N);

    for(int i=0;i<N;i++)
    {
        printf("\n%d",fibo(i));
    }
    return 0;

}

int fibo(int N)
{
    if(N==1||N==0)
    {
        return N;
    }else{
        return (fibo(N-1)+fibo(N-2));
    }
}