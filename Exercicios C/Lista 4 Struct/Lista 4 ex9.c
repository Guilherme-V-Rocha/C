#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 500

/*
9.	Crie um registro para armazenar as informações contidas em uma folha de cheques. 
Escreva um programa para ler os dados de 3 folhas de cheque e somar o valor total.
*/

struct cadastrar_cheque
{
	int comp;
	int banco;
	int agencia;
	int c1;
	long int numero_da_conta;
	int c2;
	long int numero_cheque;
	int c3;
	float valor_cheque;
	char nome_banco[MAX];
	char cidade[MAX];
	int dia;
	char mes[MAX];
	int ano;
	char assinatura[MAX];
			
};
	
main()
{
	struct cadastrar_cheque cheque[3];
	int i, soma = 0;
	printf("\n\nFaca 3 folhas de cheque.\n\n");
	for(i = 0; i < 3; i++)
	{
		printf("Numero comp: ");
		scanf("%d", &cheque[i].comp);
		
		printf("\nNumero do banco: ");
		scanf("%d", &cheque[i].banco);
		
		printf("\nNumero da agencia: ");
		scanf("%d", &cheque[i].agencia);
		
		printf("\nNumero C1: ");
		scanf("%d", &cheque[i].c1);
		
		printf("\nNumero da conta: ");
		scanf("%d", &cheque[i].numero_da_conta);
		
		printf("\nNumero C2: ");
		scanf("%d", &cheque[i].c2);
		
		printf("\nNumero do cheque: ");
		scanf("%d", &cheque[i].numero_cheque);
		
		printf("\nNumero C3: ");
		scanf("%d", &cheque[i].c3);
		
		printf("\nValor do cheque: ");
		scanf("%f", &cheque[i].valor_cheque);
		soma += cheque[i].valor_cheque;
		
		fflush(stdin);
		printf("\nNome do banco: ");
		gets(cheque[i].nome_banco);
		
		printf("\nNome da cidade: ");
		gets(cheque[i].cidade);
		
		printf("\nDigite o Dia: ");
		scanf("%d", &cheque[i].dia);	
		
		fflush(stdin);
		printf("\nDigite o mes: ");
		gets(cheque[i].mes);
		
		printf("\nDigite o ano: ");
		scanf("%d", &cheque[i].ano);
		fflush(stdin);
		printf("\nAssinatura do cheque: ");
		gets(cheque[i].assinatura);
	}
	printf("%d", soma);
	/*
	for(i = 0; i < 3; i++)
	{	
		
		printf("Numero comp: %d", cheque[i].comp);
		printf("\nNumero do banco: %d", cheque[i].banco);
		printf("\nNumero da agencia: %d", cheque[i].agencia);
		printf("\nNumero C1: %d", cheque[i].c1);
		printf("\nNumero da conta: %d", cheque[i].numero_da_conta);
		printf("\nNumero C2: %d", cheque[i].c2);
		printf("\nNumero do cheque: %d", cheque[i].numero_cheque);
		printf("\nNumero C3: %d", cheque[i].c3);
		printf("\nValor do cheque: %f", cheque[i].valor_cheque);
		printf("\nNome do banco: %s", cheque[i].nome_banco);
		printf("\nNome da cidade: %s", cheque[i].cidadde);
		printf("\nDigite o Dia: %d", cheque[i].dia);
		printf("\nDigite o mes: %s", cheque[i].mes);
		printf("\nDigite o ano: %d", cheque[i].ano);
		printf("\nAssinatura do cheque: %s", cheque[i].assinatura);
		
	}
	*/
}
