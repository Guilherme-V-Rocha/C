#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 1000

/*
8.	Criar um programa para cadastrar o nome do município, seu estado e sua população. 
Mostrar todos os municípios cadastrados do estado de Goiás e os dados do município que contém a maior população.
*/

struct cadastrar_municipio
{
	char nome_municipio[MAX];
	char estado[MAX];
	int populacao;	
};
main()
{
	struct cadastrar_municipio municipio[3];
	int i, id, maior_popula, valor;
	for(i = 0; i < 3; i++)
	{
		fflush(stdin);
		printf("Digite nome do estado: ");
		gets(municipio[i].estado);
		fflush(stdin);
		printf("Digite o nome do municipio: ");
		gets(municipio[i].nome_municipio);
		printf("Digite a populacao total: ");
		scanf("%d", &municipio[i].populacao);
	}
	printf("\n\n\n");
	for(i = 0; i < 3; i++)
	{
		maior_popula = municipio[i].populacao;
		if(maior_popula > valor)
		{
			id = i;
			valor = maior_popula;
			
		}
	}
	printf("%s\n",  municipio[id].estado);
	printf("%s\n", municipio[id].nome_municipio);
	printf("%d\n\n", valor);
	//for(i = 0; i < 3; i++)
	//	{
	//}
}
