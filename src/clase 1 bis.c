/*
 ============================================================================
 Name        : clase.c
 Author      : Raul Zevallos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout,NULL);

	int numeroUno;
	int suma = 0;
	int i;

	for(i=0;i<5;i++)
	{
		printf("\nIngrese el numero: \n");
		scanf("%d",&numeroUno);
		suma = suma +numeroUno;
	}
	//Mostramos el resultado
	printf("\nLa suma del numero es %d", suma);
	return EXIT_SUCCESS;
}
