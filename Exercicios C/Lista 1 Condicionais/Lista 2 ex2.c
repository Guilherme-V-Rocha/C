#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
2.	Escreva um programa que leia um n�mero e informe se ele � ou n�o divis�vel por 3 e por 7.
*/
main(){
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if ((a % 3 == 0) || (a % 7 == 0)){
		printf("Eh divisivel");
	}
	else if ((a % 3 != 0) || (a % 7 != 0)){
		printf("Nao divisivel");
	}
}
