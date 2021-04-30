#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 5

/*
Criar   um   programa   que   permita   ao   usuário   digitar   os   dados   de   5 acadêmicos  em  um  vetor.  
Cada  registro  deve  conter  a  matrícula  do acadêmico,  seu  nome,  sua  idade  e  quatro  notas  bimestrais.  
Solicitar  ao usuário  que  informe  uma  idade  e  o  programa  deve  imprimir  os  nomes  dos acadêmicos com idade menor que a informada,
 bem como calcular a média geral (única) de todas as notas dos acadêmicos.
*/

struct m_academico
{
	
	char nome[120];
	int idade;
	float nota;
	float nota1;
	float nota2;
	float nota3;
	
};

main()
{
	
	struct m_academico matricula_ACD[MAX];
	int i, menor, maior, idade_m;
	float soma = 0, media, dividi, soma_m;
	
	for(i = 0; i < MAX; i++)
	{
		printf("Nome do aluno: ");
		gets(matricula_ACD[i].nome);
		printf("Idade do aluno: ");
		scanf("%d", &matricula_ACD[i].idade);
		printf("1 Bimestre nota: ");
		scanf("%f", &matricula_ACD[i].nota);
		printf("2 Bimestre nota: ");
		scanf("%f", &matricula_ACD[i].nota1);
		printf("3 Bimestre nota: ");
		scanf("%f", &matricula_ACD[i].nota2);
		printf("4 Bimestre nota: ");
		scanf("%f", &matricula_ACD[i].nota3);
			
	}
	system("cls");
	printf("Digite uma idade: ");
	scanf("%d", &idade_m);
	for(i =0; i < MAX ; i++)
	{
		
		if(matricula_ACD[i].idade <= idade_m)
		{
			printf("Nome do aluno: ", matricula_ACD[i].nome);
		}
	
	}
	for(i = 0; i < MAX; i++)
	{
		soma = matricula_ACD[i].nota + matricula_ACD[i].nota1 + matricula_ACD[i].nota2 + matricula_ACD[i].nota3
		media = soma / 4;
		soma_m += media;
	}
	dividi = soma_m / 5;
	printf("%Media geral: .2f", dividi);
}
