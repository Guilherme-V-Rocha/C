#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 500

/*
Foi realizada uma pesquisa entre 500 habitantes de uma certa regi�o.De cada habitante foram coletados os dados: idade, sexo, sal�rio e n�mero de filhos.  
Crie a estrutura de dados adequada para armazenar estas informa��es e fa�a uma fun��o que armazene as informa��es digitadas pelo usu�rio na estrutura 
de dados criada. Fa�a tamb�m uma fun��o que calcula a m�dia do sal�rio dos habitantes.

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
