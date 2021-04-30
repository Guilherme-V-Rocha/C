#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 100

/*
a.  Gere (em memória) um cadastro de 100 alunos. Cada aluno terá as seguintes informações:?   
RA: inteiro;?   
Nome: cadeia de caracteres;?  
3 Notas: valores reais.
b.  Escrever o RA e o Nome do aluno que obteve a maior média.

*/
struct Aluno
{
	int ra[130];
	char nome[30];
	float nota;
	float nota1;
	float nota2;
};
	
main()
{
	struct Aluno aluno[MAX];
	float maior_nota;
	
	printf("RA do aluno............: ");
	scanf("%d", &aluno.ra);
	printf("Digite nome do aluno...: ");
	gets(aluno.nome);
	printf("Nota 1 do aluno........: ");
	scanf("%f", &aluno.nota);
	printf("Nota 2 do aluno........: ");
	scanf("%f", &aluno.nota1);
	printf("Nota 3 do aluno........: ");
	scanf("%f", &aluno.nota2);
	if(aluno.nota > 7.0 and aluno.nota1 > 7.0 and aluno.nota2 > 7.0)
	{
		maior_nota = (aluno.nota + aluno.nota1 + aluno.nota2) / 3;
		printf("RA: %d\nNome Aluno: %s\nMaior media: %.2f", aluno.ra, aluno.nome, maior_nota);
	}
}
