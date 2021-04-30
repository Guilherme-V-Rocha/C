#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
8.	Ler 4 números inteiros e calcular a soma apenas dos que forem pares.
*/
main()
{
	int n1, n2, n3, n4, soma;
	printf("Digite 4 numeros:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	if (n1 % 2 == 0)
	{
		soma = n1;
	}
	else if(n2 % 2 == 0)
	{
		soma += n2;
	}
	else if(n3 % 2 == 0)
	{
		soma += n3;
	}
	else(n4 % 2 ==0);
		soma += n4;
		printf("%d", soma);
}
