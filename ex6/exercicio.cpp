#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "portuguese");
    int opcao=0,aux=0,numero=0;
    	do{
    		printf("op��o 1: adicionar mais um n�mero\nop��o 2: calcular o maior n�mero\n\n");
 			printf("Digite uma opcao: ");
			scanf("%i" ,&opcao);
			
			switch(opcao){
            case 1:				
				printf("Digite um n�mero: ");
   				scanf("%i", &numero);
            	break;
            case 2:
    		if(numero > 0){
    			aux = numero;
    			printf("\no n�mero maior � : %i",aux);
			}
				break;
        	} 
		}while(opcao ==1);
    return 0;
}
