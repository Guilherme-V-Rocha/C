#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
18.	Faça um programa que leia um número inteiro e gere todos os números primos entre 1 e o número lido, exibindo-os na tela. 
O programa deve possuir uma sub-rotina que determina se o número analisado é ou não primo. 
Números primos são aqueles que são divisíveis somente por 1 e por ele mesmo (com exceção do número 1).
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
