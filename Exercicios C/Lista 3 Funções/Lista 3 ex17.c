#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
17.	Escreva um programa que recebe do usu�rio um valor inteiro (maior do que 1 e menor ou igual a 10 obrigatoriamente) e crie uma fun��o que receba 
esse n�mero e exiba a tabuada (at� 10) do n�mero lido.
Exemplo: n�mero lido 5.
5 x 1 = 5 
5 x 2 = 10 
.... 
5 x 10 = 50
*/
int tabuada(int x)
{
	int i, multiplicacao;
	for(i = 0; i < 11; i++)
	{
		multiplicacao = x * i;
		printf(" %d x %d = %d\n\n", x, i, multiplicacao);
	}
	return 0;
}
main()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	tabuada(numero);
}
