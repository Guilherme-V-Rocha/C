#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
24.	Escreva uma fun��o que receba um n�mero inteiro e imprima o m�s correspondente ao n�mero. 
Por exemplo, 2 corresponde a "fevereiro". A fun��o deve mostrar uma mensagem de erro caso o n�mero recebido n�o fa�a sentido.
*/

int mes(int x, char mesc[])
{
	char mes[30];
	if(x == 1)
	{
		strcpy(mes, "Janeiro");
	}
	else if(x == 2)
	{
		strcpy(mes, "Fevereiro");
	}
	else if(x == 3)
	{
		strcpy(mes, "Mar�o");
	}
	else if(x == 4)
	{
		strcpy(mes, "Abril");
	}
	else if(x == 5)
	{
		strcpy(mes, "Maio");
	}
	else if(x == 6)
	{
		strcpy(mes, "Junho");
	}
	else if(x == 7)
	{
		strcpy(mes, "Julho");
	}
	else if(x == 8)
	{
		strcpy(mes, "Agosto");
	}
	else if(x == 9)
	{
		strcpy(mes, "Setembro");
	}
	else if(x == 10)
	{
		strcpy(mes, "Outubro");
	}
	else if(x == 11)
	{
		strcpy(mes, "Novembro");
	}
	else if(x == 12)
	{
		strcpy(mes, "Dezembro");
	}
	else if(x > 12)
	{
		strcpy(mes, "Mes inexistente");
	}
	strcpy(mesc, mes);
}
main()
{
	char xmes[30];
	int numero;
	printf("Nao precisa do '0' ex: 01, 02. Apenas 1, 2 e assim por diante.\n\n");
	printf("Digite um numero correspondente ao um mes qualquer: ");
	scanf("%d", &numero);
	mes(numero, xmes);
	printf("%s", xmes);
}
