#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
7.	Faça uma função que recebe um vetor X(15) de inteiros, por parâmetro, e retorna a quantidade de valores pares em X.
*/
int vetor_inteiro(int x[])
{
	int i, count = 0;
	for(i = 0; i < 15; i++)
	{
		if(x[i] % 2 == 0)
		{
			count++;
		}
	}
	return count;
}
main()
{
	int i, vetor[15];
	printf("\nDigite 15 numeros.\n");
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &vetor[i]);
	}
	
	printf("\nPossui %d numeros pares\n", vetor_inteiro(vetor));
}
