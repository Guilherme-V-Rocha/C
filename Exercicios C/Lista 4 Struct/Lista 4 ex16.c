#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 500

/*
Foi realizada uma pesquisa entre 500 habitantes de uma certa região.De cada habitante foram coletados os dados: idade, sexo, salário e número de filhos.  
Crie a estrutura de dados adequada para armazenar estas informações e faça uma função que armazene as informações digitadas pelo usuário na estrutura 
de dados criada. Faça também uma função que calcula a média do salário dos habitantes.

*/
struct dados_rg
{
	
	int idade;
	char genero[120];
	float salario;
	int n_filhos;
	
};

main()
{
	struct dados_rg dados_i[MAX];
	int i;
	float soma, media;
	for(i = 0; i < MAX; i++)
	{
		printf("Idade: ");
		scanf("%d", &dados_i[i].idade);
		printf("Genero: ");
		gets(dados_i[i].genero);
		printf("Salario: ");
		scanf("%f", &dados_i[i].salario);
		printf("Numero de Filhos: ");
		scanf("%d", &dados_i[i].n_filhos);
	}
	for(i = 0; i < MAX; i++)
	{
		soma += dados_i[i].salario;
		media = soma / dados_i[i].salario;
		
	}
	printf("Media de salario dos habitantes: %.2f", media);
}
