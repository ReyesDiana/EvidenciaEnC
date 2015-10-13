#include<stdio.h>

char *meses [] = {"Enero", "Febrero", "Marzo","Abril"};

int i, j;
char *aux;

void main ()

{
	for (i = 0; i < 4; i++)
	{
		j=0;
		
		aux = meses [i];
		//printf("%c\n",*aux);
		while(*(aux+j) != '\0')//"Enero" = '\0'

		{
			j++;

		} 
		printf("%c",*(aux+j-3));
		printf("%c",*(aux+j-2));
		printf("%c",*(aux+j-1));
		printf("\n");

	}
}

