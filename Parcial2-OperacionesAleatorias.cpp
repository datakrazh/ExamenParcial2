/*
TRES VARIABLES
1° DETERMINA ENTRE 5 OPCIONES, SI QUIERES SUMA/RESTA/MULTIPLICACIÓN/DIVISIÓN/TERMINA EL PROGRAMA
2° DETERMINA UN NÚMERO ALEATORIO
3° DETERMINA OTRO NÚMERO ALEATORIO
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main (){
	
	srand(time(NULL));
	
	int aleatorio1, aleatorio2;
	
	aleatorio1=rand()%(5+1-1)+1;
	aleatorio2=rand()%10;
	
	printf("%d\n", aleatorio1);
	printf("%d\n", aleatorio2);
	
	return 0;
}
