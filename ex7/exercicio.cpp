#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct ALUNO{
	char nome[50];
	int idade;
	char serie[50];
}aluno;

int main(){
    setlocale(LC_ALL , "portuguese");
	struct ALUNO aluno1;
	aluno1.idade = 15;
	printf("%d" , aluno1.idade);
	
	strcpy(aluno1.nome,"gabriel");
	printf("\n%s",aluno1.nome);
	return 0;

}
