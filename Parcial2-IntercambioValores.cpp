/*
INTERCAMBIO DE VALORES V1 V2 V3
V1 A V2
V2 A V3
V3 A V1
*/
#include<stdio.h>
int main(){
	
	int v1=0, v2=0, v3=0;
	int x1=0, x2=0, x3=0;
	
	printf("Elige 3 valores diferentes: ");
	scanf("%d %d %d", &v1, &v2, &v3);
	
	x1=v1;
	x2=v2;
	x3=v3;
/*SE LE ASIGNAN LOS VALORES QUE DAS MANUALMENTE A OTRAS VARIABLES:
	x1, x2, x3 QUEDANDO EN EL MISMO ORDEN SEGÚN SU SUBÍNDICE
	SE CAMBIAN SU ORDEN POSTERIORMENTE A 1° EL TERCERO, 2° EL PRIMERO Y 3° EL SEGUNDO*/
	v1=x3;
	v2=x1;
	v3=x2;
	
/*tendría que resultar en que si le doy los números 1, 2 y 3
	el primero es 3
	el segundo es 1
	el tercero es 2
*/
	printf("\nv1 antes era: %d\nv2 antes era: %d\nv3 antes era: %d\n\n", x1, x2, x3 );
	printf("v1 ahora es: %d\nv2 ahora es: %d\nv3 ahora es: %d", v1, v2, v3);
	
	return 0;
}
