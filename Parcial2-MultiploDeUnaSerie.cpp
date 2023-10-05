#include <stdio.h>

int main(){
	
	int num;
	
    printf("Lista de numeros del 1 al 100:\n");
    
	for (num=1;num<=100;num++){
		printf("%d\n", num);
	}
    
	printf("\n\n\nDe los anteriores numeros, los que siguen son multiplos de 3:\n");
    
	for (num=1;num<=100;num++){
        if(num%3==0){
            printf("%d\n", num);
        }
    }
    
    return 0;
}
