#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

/*
19.	Faça uma função que recebe por parâmetro um valor inteiro e positivo. 
O programa principal deverá escrever se esse número é par ou ímpar, utilizando a função para isso.
*/
int int_pos(int valor, char pi[])
{	
	char pos[20];
	while(valor < 0)
	{
		printf("Numero positivo e inteiro.\n\n\n");
		break;
	}
	if ((valor > 0) && (valor % 2 == 0))
	{
		strcpy(pos," Par ");
	}
	else if ((valor > 0) && (valor % 2 != 0))
	{
		strcpy(pos, "Impar");
	}
	strcpy(pi,pos);
}
main()
{
	int x;
	char pi[20];
	printf("Digite um numero inteiro e positivo:\n");
	scanf("%d", &x);
	int_pos(x, pi);
	printf("%s", pi);
}
