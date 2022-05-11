#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL , "portuguese");
    int opcao=0,aux=0,numero=0;
    	do{
    		printf("opção 1: adicionar mais um número\nopção 2: calcular o maior número\n\n");
 			printf("Digite uma opcao: ");
			scanf("%i" ,&opcao);
			
			switch(opcao){
            case 1:				
				printf("Digite um número: ");
   				scanf("%i", &numero);
            	break;
            case 2:
    		if(numero > 0){
    			aux = numero;
    			printf("\no número maior é : %i",aux);
			}
				break;
        	} 
		}while(opcao ==1);
    return 0;
}
