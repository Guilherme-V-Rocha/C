#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
21.	Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor � dito perfeito quando ele � igual � soma dos seus divisores excetuando ele 
pr�prio. (Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores). A fun��o deve retornar um "valor l�gico", 
confirmando se o n�mero � perfeito ou n�o. O programa principal dever� escrever "o n�mero xx � perfeito" ou "o n�mero xx n�o � perfeito".
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

