#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct reg
{
	char nome[120];
	float salario;
	int idade;
	char genero[120];
};

main()
{
	struct reg registro;
	
	printf("Nome...: ");
	gets(registro.nome);
	printf("Salario: ");
	scanf("%f", &registro.salario);
	printf("Idade..: ");
	scanf("%d", &registro.idade);
	fflush(stdin);
	printf("Genero.: ");
	gets(registro.genero);
	
	
	
	system("cls");

	printf("Nome %s\nSalario %.2f\nIdade %d | Genero %s", registro.nome, registro.salario, registro.idade, registro.genero);
}
