#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*
11.	Crie um registro para catalogar CDs. Para cada CD, deseja-se saber o título, o intérprete, o ano de lançamento e a quantidade de faixas. 
Crie um programa que receba as informações de dois CDs e imprima o título e o intérprete de cada um.
*/
struct catalogar_cd
{
	char titulo[1000];
	char interprete[1000];
	long int ano;
	int qtd_faixas;
};	
main()
{
	struct catalogar_cd catalagos[1];
	int i;
	for(i = 0; i <= 1; i++)
	{
		fflush(stdin);
		printf("Digite o nome do titulo: ");
		gets(catalagos[i].titulo);
		printf("\nDigite o nome do interprete: ");
		gets(catalagos[i].interprete);
		printf("\nDigite o ano de lancamento: ");
		scanf("%d", &catalagos[i].ano);
		printf("\nDigite a quantidade de faixas: ");
		scanf("%d\n", &catalagos[i].qtd_faixas);
	}
	for(i = 0; i <= 1; i++)
	{
		printf("%s\n", catalagos[i].titulo);
		printf("%s", catalagos[i].interprete);
		//printf("Ano de lancamento: %d", catalagos[i].ano);
		//printf("Quantidade de faixas: %d", catalagos[i].qtd_faixas);
	}
}
