#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

/*
9.	Fazer um algoritmo para ajudar a bilheteria do metrô.  							
O passageiro deve informar o tipo do bilhete que deseja comprar (unitário, duplo ou 10 viagens), bem como o valor entregue ao vendedor.  
O sistema deve mostrar, então, a quantidade de bilhetes possíveis e o troco que o passageiro deve receber. Considere a seguinte tabela de preço:
		Bilhete unitário 	1,30
		Bilhete duplo 	2,60
		Bilhete de 10 viagens 	12,00
*/

main()
{
	int bilhete, quantidade,valor;
	float calcule;
	printf(" Tabela de bilhetes: 1 Para bilhetes unitario\n 2 Para bilhetes duplo\n 3 Para bilhetes de 10 viagens\n\n" );
	scanf("%d", &bilhete);
	printf("Valores do bilhete:\n Unitario R$ 1.30\n Duplo R$ 2.60\n 10 viagens R$ 12.00\n\n");
	printf("Digite a quantidade de bilhetes que voce quer\n");
	scanf("%d", &quantidade);
	printf("Valor da sua nota de dinheiro:\n");
	scanf("%d", &valor);
	if(bilhete == 1){
		calcule = valor - (quantidade * 1.30);
		printf("%2.f", calcule);
	}
	else if(bilhete == 2){
		calcule = valor - (quantidade * 2.60);
		printf("%2.f", calcule);
	}
	else if(bilhete == 3){
		calcule = valor - (quantidade * 12.00);
		printf("%3.f", calcule);
	}
}
