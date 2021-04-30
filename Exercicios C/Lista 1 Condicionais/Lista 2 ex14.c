#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
14.	Faça um algoritmo que leia um número qualquer. Caso o número seja par menor que 10, escreva 'Número par menor que Dez', 
caso o número digitado seja ímpar menor que 10 escreva 'Número Ímpar menor que Dez', caso contrário Escreva 'Número fora do Intervalo'.
*/

main()
{
	int numero;
	printf("Digite um numero até 10:\n");
	scanf("%d", &numero);
	if ((numero % 2 == 0) && (numero < 10))
	{
		printf("Numero par menor que Dez");
	}
	else if ((numero % 2 != 0 ) && (numero < 10))
	{
		printf("Numero impar menor que Dez");
	}
	else if (numero > 10)
	{
		printf("Numero fora do Intervalo");
	}
}
