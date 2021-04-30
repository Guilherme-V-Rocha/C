#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct lj_roupas
{
	int cd_peca;
	char dc_peca[51];
	char n_fornecedor[26];
	int qt_recebida;
	float custo_peca;
};

main()
{
	struct lj_roupas loja_Roupas;
	
	printf("Digite o codigo da peca.....: ");
	scanf("%d", &loja_Roupas.cd_peca);
	
	fflush(stdin);
		
	printf("Descricao da peca...........: ");
	gets(loja_Roupas.dc_peca);
	printf("Nome do fornecedor..........: ");
	gets(loja_Roupas.n_fornecedor);
	printf("Digita a quantidade recebida: ");
	scanf("%d", &loja_Roupas.qt_recebida);
	printf("Digite o custo por peca.....: ");
	scanf("%f", &loja_Roupas.custo_peca);
	
	system("cls");
}
