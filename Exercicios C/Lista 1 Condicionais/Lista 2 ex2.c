#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
2.	Escreva um programa que leia um número e informe se ele é ou não divisível por 3 e por 7.
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
