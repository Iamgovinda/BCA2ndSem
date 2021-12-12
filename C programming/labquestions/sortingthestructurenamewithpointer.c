#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee{
    int id;
    char *name;
    char address[20];
} *emp;
int comparator(struct employee emp,const void* p, const void* q)
{
    return strcmp(((struct employee*)p)->name,
			((struct employee*)q)->name);
}

int main()
{
    int N=5;

    emp=(struct employee *)malloc(N*sizeof(struct employee));

    for(int i=0;i<5;i++)
    {
        printf("\n\nEnter the id%d: ",i+1);
        scanf("%d",&(emp+i)->id);

        printf("For %d Employee: \n");

        fflush(stdin);
        printf("\nEnter name: ");
        gets((emp+i)->name);
        fflush(stdin);
        printf("Enter Address: ");
        gets((emp+i)->address);

    }


    //sorting the structure on the basis of the name.

    qsort(emp,N,sizeof(struct employee),comparator)
    ;
    
    for(int i=0;i<5;i++)
    {
        printf("\n%d id:",(emp+i)->id);
        printf("\nName: %s",(emp+i)->name);
        printf("\nAddress: %s",(emp+i)->address);

        printf("\n\n");
        
    }


}