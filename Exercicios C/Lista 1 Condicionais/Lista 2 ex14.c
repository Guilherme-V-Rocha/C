#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
14.	Fa�a um algoritmo que leia um n�mero qualquer. Caso o n�mero seja par menor que 10, escreva 'N�mero par menor que Dez', 
caso o n�mero digitado seja �mpar menor que 10 escreva 'N�mero �mpar menor que Dez', caso contr�rio Escreva 'N�mero fora do Intervalo'.
*/

main()
{
	int numero;
	printf("Digite um numero at� 10:\n");
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
