#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/* 
10.	Fa�a uma fun��o que l� uma quantidade indeterminada de n�meros inteiros, onde o �ltimo seja 0 e retorne o maior deles.
*/
int zero_maior(int x)
{
	int maior;
	while (x != 0)
	{
		scanf("%d", &x);
		if (x > maior)
		{
			maior = x;
		}
	}
	return maior;
}
main()
{
	int valor;
	printf("Digite um numero inteiro: \n");
	scanf("%d", &valor);
	printf("%d maior\n ", zero_maior(valor));
}
