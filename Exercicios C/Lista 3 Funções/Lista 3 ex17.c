#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
17.	Escreva um programa que recebe do usuário um valor inteiro (maior do que 1 e menor ou igual a 10 obrigatoriamente) e crie uma função que receba 
esse número e exiba a tabuada (até 10) do número lido.
Exemplo: número lido 5.
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
