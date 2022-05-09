#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL ,"PORTUGUESE");
	
	int a=10, b=20 ,aux=0;
	printf("A: %i\nB: %i",a,b);

	aux = a;
	a = b;
	b = aux;
	
	printf("\n\nA: %i\nB: %i",a,b);

	return 0;
}


