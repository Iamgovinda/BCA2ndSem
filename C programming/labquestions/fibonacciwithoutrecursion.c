#include<stdio.h>
int main()
{
    int N,a=0,b=1,i,c;

    printf("Enter the number of terms: ");
    scanf("%d",&N);

    printf("Fabonacci series till %d terms are: \n");
    
    for(int i=0;i<N;i++)
    {
        if(i==0||i==1)
        {
            printf("%d\n",i);
        }
        else{
            c=a+b;
            a=b;
            b=c;
            printf("%d\n",c);
        }
    }
    return 0;
}