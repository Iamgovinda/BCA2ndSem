#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};

    printf("%d\n",*arr);
    for(int i=1;i<5;i++)
    {
        printf("%d\n",*(arr+i));
    }
}