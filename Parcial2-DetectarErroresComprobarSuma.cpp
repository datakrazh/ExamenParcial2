/*
DETECTAR LOS ERRORES EN EL PROGRAMA
	PROGRAMA QUE PIDE DOS NÚMEROS
	PREGUNTA CUÁNTO ES LA SUMA DE AMBOS
	MUESTRA "CORRECTO" O "INCORRECTO"
*/
#include<stdio.h>

int main(){
	
	int n1, n2, resultado, suma;
	
	printf("Escoge un numero: ");
	scanf("%d", &n1);
	
	printf("\nEscoge un segundo numero: ");
	scanf("%d", &n2);
	
	printf("\nEscribe cuanto suman entre si: ");
	scanf("%d", &suma);
	
	resultado=n1+n2;
	if (suma==resultado){
		printf("\nSU RESPUESTA ES CORRECTA");
	}
	else{
		printf("\nSU RESPUESTA ES INCORRECTA");
	}
	
	return 0;
}
