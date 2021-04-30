#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

/*
11.	Ler um nome do teclado e ver se é igual ao seu nome. Imprimir conforme o caso: "NOME CORRETO" ou "NOME INCORRETO".
*/
main()
{
	char nome [10];
	printf("Digite o nome correto:\n");
	gets(nome);
	if (strcmp (nome,"Guilherme") == 0)
	{
		printf("Nome correto ");
	}
	else printf("Nome incorreto");
}

