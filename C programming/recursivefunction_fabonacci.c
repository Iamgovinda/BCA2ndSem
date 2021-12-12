#include<stdio.h>
int fabonacii(int len);

int main()
{
    int num;
    printf("Enter the length of the fabonacii series: ");
    scanf("%d",&num);

    for(int i=0;i<num;i++)
    {
        printf("%d\n",fabonacii(i));
    }
}

int fabonacii(int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    else{
        return fabonacii(n-1)+fabonacii(n-2);
    }
}
