#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
5.	Ler 2 n�meros inteiros do teclado (NUM1 e NUM2), verificar e imprimir qual deles � o maior, ou a mensagem "Os n�meros s�o iguais", 
caso realmente sejam.
*/
main(){
	int a, b;
	printf("Digite 2 numeros: \n");
	scanf("%d", a);
	scanf("%d", b);
	if (a == b){
		printf("Os dois s�o igual");
	}
	else if (a > b){
		printf("Primeiro numero eh maior: ", a);
		printf("Subtracao 1 e 2 = ", (a - b));
	}
	else if (b > a){
		printf("Segundo numero eh maior: ", b);
		printf("Subtracao 2 e 1 = ", (b - a));
	}
}
