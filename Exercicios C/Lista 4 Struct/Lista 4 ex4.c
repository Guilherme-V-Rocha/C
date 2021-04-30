#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct voos
{
	int n_aviao;
	char id_voo[9];
	char n_cliente[25];
	char tp_assento[4];
	float vl_passagem;
};

main()
{
	struct voos registro_voo;
	
	printf("Numero do Aviao.....: ");
	scanf("%d", &registro_voo.n_aviao);
	
	fflush(stdin);
	
	printf("Identificacao do voo: ");
	gets(registro_voo.id_voo);
	printf("Nome do cliente.....:");
	gets(registro_voo.n_cliente);
	printf("Tipo de assento.....: ");
	gets(registro_voo.tp_assento);
	printf("Valor da passagem...:");
	scanf("%f", &registro_voo.vl_passagem);
	
	system("cls");
	
	printf("Numero do Aviao: %d\nIdentificacao do voo: %s\nNome: %s\nAssento: %s\nValor da passagem: %.2f", registro_voo.n_aviao, registro_voo.id_voo, registro_voo.n_cliente, registro_voo.n_cliente, registro_voo.tp_assento, registro_voo.vl_passagem);
}
