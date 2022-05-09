#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//declarando a variavel n com o valor 0;
	int n=0;
	
	//armazenando um valor na variavel n;
	scanf("%i",&n);
	
	//Apresentando ao usuário o valor digitado na variavel n;
	printf("antecessor: %i" , n-1);
	
	return 0;
}
