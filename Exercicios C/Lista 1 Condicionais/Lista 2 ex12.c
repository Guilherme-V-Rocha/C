#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
12.	Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
	Idade			Categoria
	5 - 7 anos		infantil A
	8 - 10 anos		infantil B
	11 - 13 anos	juvenil A
	14 - 17 anos	juvenil B
	maiores ou igual a 18 anos	Adulto
	
*/

main()
{
	int idade;
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	if ((idade >= 5) && (idade <= 7))
	{
		printf("Categoria: Infantil A");
	}
	else if ((idade >= 8) && (idade <= 10))
	{
		printf("Categoria: Infantil B");
	}
	else if ((idade >= 11) && (idade <= 13))
	{
		printf("Categoria: Juvenil A");
	}
	else if ((idade >= 14) && (idade <= 17))
	{
		printf("Categoria: Juvenil B");
	}
	else if (idade > 18)
	{
	  printf("Categoria: Adulto ");
	}
}
