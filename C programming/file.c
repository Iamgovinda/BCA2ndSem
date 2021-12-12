#include<stdio.h>
int main()
{
	FILE *fpointer;

	fpointer=fopen("textfile.txt","r");

	//INSERTING THE TEXT IN THESE TEXT FILES.
	//fputc('o',fpointer);                           
	//fputs("Hello this is me govinda and i love ",fpointer);
	//fprintf(fpointer,"sunta..");

	//Getting the texts from these text file.
	char str[20];
	fgets(str,5,fpointer); //returns the first character of the file.
	printf("The charecter i read was %s",str);


	fclose(fpointer);

}