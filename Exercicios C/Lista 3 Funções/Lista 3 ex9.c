#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
9.	Fa�a uma fun��o que recebe, por par�metro, um n�mero inteiro e positivo e retorna o n�mero de divisores desse n�mero.
*/

int divisores(int valor)
{
	int i, divisor;
	while (valor < 0)
	{
		printf("\n\nNumero positivo por favor.\n\n");
		system("pause");
	}
	for(i = 1; i < valor; i++)
	{
		if(valor % i == 0)
		{
			divisor = i;	
		
		}	
	}
	return divisor;
}
main()
{
	int numero, x;
	printf("Digite um numero inteiro e positivo:\n");
	scanf("%d", &numero);
	x = divisores(numero);
	printf("Divisores de %d sao %d divisores. ", numero, x);
		
}
