#include<stdio.h>
int variable;
float arreglo [5];
float leer;
int contador=0;
int i;

int main ()
{

	printf ("Hola mundo!\n");
	printf ("Dame un numero:\n");
	scanf("%d",&variable);
	printf("El numero recibido es %d",variable);
	scanf ("%f",&leer);
	arreglo[0]=leer;
	printf ("El valor flotante es %.1f\n",arreglo[0]);
	if (variable > 10)
	{
		printf ("Mayor que 10\n");


	}

	else 
	{
		printf ("Menor que 10\n");
	}

	while (contador < 10)
	{
		printf ("El contador es: %d",contador);
		contador++;
	}
	for (i=0; i <10; i++)
	{
		printf ("ciclo for: %d",i);
	return 0;
}

/*
int %d
float %f
*/
