#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 100

/*
 Crie um registro para uma locadora de carros, cuja ficha de carros é como segue:
 Código
 Marca
 Modelo
 Cor
 Combustível
 Ano
 Faça um programa para cadastrar 100 carros (utilize um vetor de carros de 100 posições).
*/

struct cd_carro
{
	int codigo;
	char marca[120];
	char modelo[120];
	char cor[120];
	char tp_combustivel[120];
	int ano;
};

main()
{
	struct cd_carro locadora_carro[100];
	int i;
	for(i = 0; i < 100; i++)
	{
		system("cls");
		printf("Codigo do carro....: ");
		scanf("%d", &locadora_carro[i].codigo);
		printf("Marcado do carro...: ");
		gets(locadora_carro[i].marca);
		fflush(stdin);
		printf("Modelo do carro....: ");
		gets(locadora_carro[i].modelo);
		printf("Cor do carro.......: ");
		fflush(stdin);
		gets(locadora_carro[i].cor);
		printf("Tipo de combustivel: ");
		gets(locadora_carro[i].tp_combustivel);
		printf("Ano do carro.......:");
		scanf("%d", &locadora_carro[i].ano):
	}
	system("cls");
	for(i = 0; i < 100; i++)
	{
		printf("Codigo do carro....: %d", locadora_carro[i].codigo);
		printf("Marcado do carro...: %s", locadora_carro[i].marca);
		printf("Modelo do carro....: %s", locadora_carro[i].modelo);
		printf("Cor do carro.......: %s", locadora_carro[i].cor);
		printf("Tipo de combustivel: %s", locadora_carro[i].tp_combustivel);
		printf("Ano do carro.......: %d", locadora_carro[i].ano);
	}
}

