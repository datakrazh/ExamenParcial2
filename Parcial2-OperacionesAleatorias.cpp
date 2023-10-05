#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int NumeroAleatorio=1;
    int valor1, valor2;

		printf("Escoge un numero entre 1 y 5 para elegir entre...\n");

    while (NumeroAleatorio!=0){

		printf("Menu de opciones:\n");
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Multiplicacion\n");
		printf("4. Division\n");
		printf("5. Salir del programa\n\n");
		printf("Tu eleccion: ");
		scanf("%d", &NumeroAleatorio);
		printf("\n");

        switch (NumeroAleatorio){
			case 1:
				valor1=rand()%10;
				valor2=rand()%10;
				printf("Suma: %d + %d = %d\n", valor1, valor2, valor1 + valor2);
				printf("\n");
				break;

            case 2:
				valor1=rand()%10;
				valor2=rand()%10;
				printf("Resta: %d - %d = %d\n", valor1, valor2, valor1 - valor2);
				printf("\n");
				break;

            case 3:
				valor1=rand()%10;
				valor2=rand()%10;
				printf("Multiplicacion: %d * %d = %d\n", valor1, valor2, valor1*valor2);
				printf("\n");
				break;

            case 4:

				valor1=rand()%10;

				do{						//A PARTIR DE AQUÍ SE REPITE LA ALEATORIZACIÓN DEL SEGUNDO VALOR CUANDO SE DIVIDE ENTRE 0 PARA EVITAR ESTE CASO
					valor2=rand()%10;
				}
				while(valor2==0);

				printf("Division: %d / %d = %.2f\n", valor1, valor2, (float)valor1/valor2); //ANTES DE IMPRIMIR EL RESULTADO DE "valor1/valor2" QUE SALDRÍA EN INT O ENTEROS, LO VOLVEMOS UN  VALOR FLOAT PARA QUE OBTENGAMOS EL RESULTADO DE FORMA CORRECTA
				printf("\n");
				break;

            case 5:
            	
				printf("FIN.\n");
				return 0;

        }
    }
    return 0;
}
