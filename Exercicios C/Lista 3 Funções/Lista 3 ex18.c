#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
18.	Fa�a um programa que leia um n�mero inteiro e gere todos os n�meros primos entre 1 e o n�mero lido, exibindo-os na tela. 
O programa deve possuir uma sub-rotina que determina se o n�mero analisado � ou n�o primo. 
N�meros primos s�o aqueles que s�o divis�veis somente por 1 e por ele mesmo (com exce��o do n�mero 1).
*/
int primo(int x)
{
	int i = 1, j, count;
	while (i < x)
	{
		i++;
		count = 0;
		for(j = 1; j < x ; j++)
		{
			if(i % j == 0)
			{
				count++;		
			}
		}
		if(count > 2)
		{
			printf("%d nao primo\n\n", i);
		}
		else printf(" %d primo\n\n", i);
	}
}
main()
{
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	primo(numero);
}
