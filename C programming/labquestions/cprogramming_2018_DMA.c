#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *dataloc;
    int n,i;
    printf("Enter the number of elments: ");
    scanf("%d",&n);

    dataloc=(int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("Enter number%d: ",i+1);
        scanf("%d",dataloc+i);
    }
    printf("%d,%d",dataloc,*dataloc);
    
    int max=*dataloc;
    
    int min=*dataloc;

    for(i=1;i<n;i++)
    {
        if(max<*(dataloc+i))
        {
            max=*(dataloc+i);
        }

        if(min>*(dataloc+i))
        {
            min=*(dataloc+i);
        }
    }


    printf("\n\nmax=%d\nmin=%d",max,min);
    return 0;
}