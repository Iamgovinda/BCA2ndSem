#include<stdio.h>
int main()
{
	long long int N;
	printf("Enter N: ");
	scanf("%lli",&N);
	
	long long fact=1;

	for(long long int i=1;i<=N;i++)
	{
		fact=fact*i;
	}
	printf("%lli",fact);

	return 0;

}