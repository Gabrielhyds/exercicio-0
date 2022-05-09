#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");

	//declarando as variaveis;
	float area=0.0,base=0.0,altura=0.0;
	
	//apresentando ao usuário oq o programa vai fazer
	printf("Programa para calcular a area de um retângulo\n\n");
	
	//apresentando e pedindo para o usuário digitar a base do retangulo
	printf("Digite a base do retângulo: ");
	scanf("%f" ,&base);
	
	//apresentando e pedindo para o usuário digitar a altura do retangulo
	printf("\nDigite a altura do retângulo: ");
	scanf("%f",&altura);
	
	//realizando a operação para calcular a area do retângulo e armazenar na variavel area
	area = base * altura;
	
	//apresentando o valor obtido da operação para o usuário
	printf("\na AREA do retângulo é: %.2f" , area);
	
	return 0;	
}
