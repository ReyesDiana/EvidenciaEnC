#include<stdio.h>

int arreglo [5];
int *ptr;
int i;

int main ()

{
	arreglo [0] = 1;
	arreglo [1] = 2;
	arreglo [2] = 3;
	arreglo [3] = 4;
	arreglo [4] = 5;
	ptr = arreglo;


//printf ("posicion 1 %d\n", *ptr);

	for (i = 0; i < 5; i++)
		printf ("Arreglo [%d] = %d\n",i,*(ptr+i));
}
