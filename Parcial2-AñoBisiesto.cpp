/*
PROGRAMA QUE A PARTIR DE UN NÚMERO (AÑO):
	LEA EL VALOR, ASIGNÁNDOLO A LA VARIABLE TIPO INT "a" Y SI SÓLO SI
		"a" ES MÚLTIPLO DE 4
	Y
		"a" NO ES MÚLTIPLO DE 100
	O
		"a" ES MÚLTIPLO DE 400
	IMPRIMIR QUE SÍ ES BISIESTO
DE LO CONTRARIO
	IMPRIMIR QUE NO ES BISIESTO
*/
#include <stdio.h>

int main (){
	
	int a=0;
	
	printf("Introduzca un ano: ");
	scanf("%d", &a);
	
	if (((a%4==0) && (a%100!=0)) || a%400==0)
		printf ("Este ano SI es bisiesto");
	else
		printf ("Este ano NO es bisiesto");
		
	return 0;
}
