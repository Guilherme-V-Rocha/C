#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
21.	Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual à soma dos seus divisores excetuando ele 
próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um "valor lógico", 
confirmando se o número é perfeito ou não. O programa principal deverá escrever "o número xx é perfeito" ou "o número xx não é perfeito".
*/

int valor_perfeito(int x)
{
	int i, divisor, soma;
	for(i = 1; i < x; i ++ )
	{
		if(x % i == 0)
		{
			divisor = i;
		}
	}
	for(i = 1; i < divisor + 1; i++)
	{
		soma += i;
	}
	return soma;
}
main()
{
	int valor_p, perfeito;
	printf("Digite um numero inteiro e positivo:\n");
	scanf("%d", &valor_p);
	perfeito = valor_perfeito(valor_p);
	if( valor_p == perfeito)
	{
		printf("Numero %d perfeito", perfeito);
	}
	else if(valor_p != perfeito)
	{
		printf("Numero %d imperfeito", perfeito);
	}	
}

