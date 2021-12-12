#include<stdio.h>
int main()
{
    int matrix[2][2];
    int sum[2][2];
    int s=0;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the data for matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\n\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for (int k=0;k<2;k++)
            {
                s+=matrix[i][k]*matrix[k][j];
            }
            sum[i][j]=s;
            s=0;
        }
        
    }


    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

}