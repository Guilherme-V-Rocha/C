#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
18.	Considere que um m�dico tenha para cada um de seus pacientes as seguintes indaga��es:
	Nome ?
	Tem espirros? 		(N - n�o / S - sim )
	Tem coriza?			(N - n�o / S - sim )
	Tem dor de cabe�a? 	(N - n�o / S - sim )
	Temperatura? 		(36.5 a 37 normal)
	Considerando que:
"	se o paciente apresentar apenas um sintoma, o diagn�stico � gripe;
"	se o paciente apresentar todos os sintomas, o diagn�stico � pneumonia;
"	se o paciente tiver apenas coriza e espirros, o diagn�stico � resfriado;
"	se o paciente tiver todos os sintomas, exceto temperatura anormal, o diagn�stico � bronquite;
"	qualquer outra combina��o de diagn�stico � indefinido.
Fa�a um algoritmo que imprima o nome e diagn�stico de cada paciente.

*/
main()
{
	int espirro, coriza, dor_de_cabeca, temperatura;
	char nome[77];
	printf("Nome do paciente ?\n");
	gets(nome);
	printf("1 para Nao e 2 para Sim.\n");
	printf("Tem espirros? 		1 - Nao / 2 - Sim\nTem coriza?			1 - Nao / 2 - Sim\nTem dor de cabeca? 	1 - Nao / 2 - Sim\nTemperatura? 		36.5 a 37 normal");
	scanf("%d", &espirro);
	scanf("%d", &coriza);
	scanf("%d", &dor_de_cabeca);
	scanf("%d", &temperatura);
	if((espirro == 1) || (coriza == 1) || (dor_de_cabeca == 1))
	{
		printf("Senhor %s seu diagnostico deu gripe", nome);
	}
	else if((espirro == 1) && (coriza == 1) && (dor_de_cabeca == 1) && ((temperatura < 36) || (temperatura > 37)))
	{
		printf("Senhor %s seu diagnostico deu pneumonia", nome);
	}
	else if((espirro == 1) || (coriza == 1))
	{
		printf("Senhor %s seu diagnostico deu resfriado", nome);
	}
	else if((espirro == 1) && (coriza == 1) && (dor_de_cabeca == 1))
	{
		printf("Senhor %s seu diagnostico deu bronquite", nome);
	}
}
