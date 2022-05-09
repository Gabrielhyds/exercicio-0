#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//declarando as variaveis
	float salario=0.0 , percentual=0.0 , novoSalario=0.0; 
	
	//apresentando ao usuário a mensagem para passar o salario.
	printf("Digite o salario: ");
	scanf("%f" ,&salario);
	
	//apresentado ao usuário a mesagem para passar o reajuste e armazenar em percentual.
	printf("digite o reajuste");
	scanf("%f",&percentual);
	
	novoSalario = (percentual/100) * salario;
	
	
	printf("novo salario do usuário: %.2f",novoSalario+salario);
	
}
