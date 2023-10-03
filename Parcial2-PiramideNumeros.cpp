/*
MITAD DE PIRÁMIDE DE NÚMEROS
*/
#include<stdio.h>
int main(){
	
	int i, j, lineas;
	
	printf("Escribe cuantas lineas quieres que tenga la piramide: ");
	scanf("%d", &lineas);
	
	for(i=1;i<=lineas;i++){
		for(j=1;j<=i;j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
