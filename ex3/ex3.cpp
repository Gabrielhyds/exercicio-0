#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");

	//declarando as variaveis;
	float area=0.0,base=0.0,altura=0.0;
	
	//apresentando ao usu�rio oq o programa vai fazer
	printf("Programa para calcular a area de um ret�ngulo\n\n");
	
	//apresentando e pedindo para o usu�rio digitar a base do retangulo
	printf("Digite a base do ret�ngulo: ");
	scanf("%f" ,&base);
	
	//apresentando e pedindo para o usu�rio digitar a altura do retangulo
	printf("\nDigite a altura do ret�ngulo: ");
	scanf("%f",&altura);
	
	//realizando a opera��o para calcular a area do ret�ngulo e armazenar na variavel area
	area = base * altura;
	
	//apresentando o valor obtido da opera��o para o usu�rio
	printf("\na AREA do ret�ngulo �: %.2f" , area);
	
	return 0;	
}
