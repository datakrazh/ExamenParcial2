/*
PROGRAMA QUE A PARTIR DE UN N�MERO (A�O):
	LEA EL VALOR, ASIGN�NDOLO A LA VARIABLE TIPO INT "a" Y SI S�LO SI
		"a" ES M�LTIPLO DE 4
	Y
		"a" NO ES M�LTIPLO DE 100
	O
		"a" ES M�LTIPLO DE 400
	IMPRIMIR QUE S� ES BISIESTO
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
