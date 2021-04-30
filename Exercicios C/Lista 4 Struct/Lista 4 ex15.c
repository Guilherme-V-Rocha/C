#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 5
/*
 Fazer um programa que cria uma estrutura livro, que cont�m os elementos t�tulo, ano de edi��o, n�mero de p�ginas e pre�o. 
 Criar uma vari�vel desta estrutura que � um vetor de 5 elementos. 
 Ler os valores para a estrutura e imprimir a m�dia do n�mero de p�ginas dos livros e o t�tulo do livro mais caro.
*/

struct est_livro
{
	
	char titulo[120];
	int ano_ed;
	int pagina;
	float preco;
	
};

main()
{
	struct est_livro estrutura_livro[MAX];
	int i, id, soma, media;
	float valor_livro, auxiliar;
	
	for(i = 0; i < MAX; i++)
	{
		
		system("cls");
		aprintf("Titulo: ");
		gets(estrutura_livro[i].titulo);
		fflush(stdin);
		printf("Ano de edicao: ");
		scanf("%d", &estrutura_livro[i].ano_ed);
		printf("Numero de paginas: ");
		scanf("%d", &estrutura_livro[i].pagina);
		printf("Preco: ");
		scanf("%f", &estrutura_livro[i].preco);
				
	}
	for(i = 0; i < MAX; i++)
	{
		auxiliar = estrutura_livro[i].preco;
		if(auxiliar > valor_livro)
		{
			id = i;
			valor_livro = auxiliar;
		}
	}
	for(i = 0; i < MAX; i++)
	{
		soma += estrutura_livro[i].pagina;
		media = soma / estrutura_livro[i].pagina;		
	}
	printf("Media de pagina dos livros: %d", media);
	printf("Titulo mais caro: %s", estrutura_livro[id].titulo);
	
}
