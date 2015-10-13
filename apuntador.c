#include <stdio.h>
int *ptr;
int i;

void burbuja (int * arreglo, int tam)
{
int i = 0;
for (i = 0; i<tam; i++)
	printf ("arreglo [%d] = %d\n", i, * (arreglo+i));


}

int main ()

{
	int arreglo [5];
	arreglo [0] = 1;
	arreglo [1] = 2;
	arreglo [2] = 3;
	arreglo [3] = 4;
	arreglo [4] = 5;


	
 
	burbuja (arreglo,5);
	system ("pause");

		for (i = 0; i < 5; i++)
		printf ("Arreglo [%d] = %d\n",i,*(ptr+i));

		ordenar ("")


}



