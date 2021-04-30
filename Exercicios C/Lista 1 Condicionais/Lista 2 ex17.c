#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
17.	Elabore um algoritmo que avalie as condições de batimento cardíaco de um indivíduo solicitando seu nome e seu batimento por minuto, 
apresentando as seguintes mensagens:
	-Batimento entre 40 e 59, "Batimento Baixo";
	-Batimento entre 60 e 70, "Batimento Normal";
	-Batimento entre 71 e 100, "Batimento Acelerado. Semana que vem é prova de algoritmos!";
	-Batimento acima de 120, "Batimento Turbinado. To Fazendo a prova";
	-Batimento = 0, "Deve ter morrido, saiu resultado das notas!".
*/
main()
{
	int bmp;
	printf("Digite a frequencia de bmp:\n");
	scanf("%d", &bmp);	
	if ((bmp >= 40) && (bmp <= 59))
	{
		printf("Batimento Baixo");
	}
	else if ((bmp >= 60 ) && (bmp <= 70))
	{
		printf("Batimento Normal");
	}
	else if ((bmp >= 71) && (bmp <= 100))
	{
		printf("Batimento Acelerado. Semana que vem é prova de algoritmos!");
	}
	else if(bmp > 120)
	{
		printf("Batimento Turbinado. To Fazendo a prova");
	}
	else if(bmp == 0)
	{
		printf("Deve ter morrido, saiu resultado das notas!");
	}
}
