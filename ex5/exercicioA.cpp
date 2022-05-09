#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL , "portuguese");
	float varTotal=0.0 , varImposto=0.0 , vardist=0.0, varcustoFab=0.0;
	printf("Digite o custo de fábrica: ");
	scanf("%f",&varcustoFab);
	varImposto = (45*varcustoFab) / 100;
	vardist = (28*varcustoFab) / 100;
	varTotal = varcustoFab + varImposto + vardist;
	printf("O valor do carro será de: %.2f",varTotal); 
	
	return 0;
}
