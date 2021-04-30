#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*
 Cadastrar  os  produtos  de  uma  loja  com  os  seguintes  dados:  c�digo, descri��o, estoque m�nimo, estoque atual e pre�o. 
 Mostrar todos os dados dos produtos que contenham o estoque atual menor que o estoque m�nimo para  efetuar  a  compra.  
 Voc�  pode  armazenar  essas  informa��es  em mem�ria prim�ria.
*/

struct cadastro_loja
{
	int cd_produto;
	char ds_produto[120];
	int estoque_min;
	int estoque_atual;
	float preco;
};

main()
{
	struct cadastro_loja cadastro_produto;
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &cadastro_produto.cd_produto);
	
	fflush(stdin);
	
	printf("Descricao do produto: ");
	gets(cadastro_produto.ds_produto);
	printf("Estoque minimo: ");
	scanf("%d", &cadastro_produto.estoque_min);
	printf("Estoque atual: ");
	scanf("%d", &cadastro_produto.estoque_atual);
	printf("Preco: ");
	scanf("%f", &cadastro_produto.preco);
	if(cadastro_produto.estoque_atual < cadastro_produto.estoque_min)
	{
		printf("Efetuar Compra");
	}
	system("cls");
	
}
