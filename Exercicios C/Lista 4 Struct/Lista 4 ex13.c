#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100

/*
 Crie um registro para a seguinte ficha de funcion�rios:
 C�digo
 Nome
 Endere�o:
 	Rua
 	N�mero
 	Bairro
 	CEP
 Sal�rio
 Data de Nascimento:
 	Dia
 	M�s
 	Ano
 Fa�a  um  programa  para  cadastrar  100  funcion�rios  (utilize  um  vetor  de funcion�rios de 100 posi��es).
*/

struct Endereco
{
	
	char n_rua[120];
	int numero;
	char bairro[120];
	char cep[120];
	
};

struct Dt_Nascimento
{
	
	int dia;
	int mes[100];
	int ano;
		
};

struct Cadastro
{
	
	int codigo;
	char nome[120];
	struct Endereco endereco;
	float salario;
	struct Dt_Nascimento dt_nascimento;
	
};
main()
{
	struct Cadastro cdt_funcionario[100];
	int i;
	
	for(i = 0; i < 100; i++)
	{
		printf("Codigo: ");
		scanf("%d", &cdt_funcionario[i].codigo);
		printf("Nome do funcionario: ");
		gets(cdt_funcionario[i].nome);
		fflush(stdin);
		printf("\nEndereco\n");
		printf("Nome da Rua: ");
		gets(cdt_funcionario[i].endereco.n_rua);
		printf("Numero: ");
		scanf("%d", &cdt_funcionario[i];endereco.numero);
		printf("Bairro: ");
		gets(cdt_funcionario[i].endereco.bairro);
		printf("CEP: ");
		gets(cdt_funcionario[i].endereco.cep);
		fflush(stdin);
		printf("Salario: ");
		scanf("%f", &cdt_funcionario[i].salario);
		fflush(stdin);
		printf("\n Data de Nascimento\n");
		printf("Dia: ");
		scanf("%d", &cdt_funcionario[i].dt_nascimento.dia);
		printf("Mes: ");
		scanf("%d", &cdt_funcionario[i].dt_nascimento.mes);
		printf("Ano: ");
		scanf("%d", &cdt_funcionario[i].dt_nascimento.ano);
	}
	for(i = 0; i < 100; i++)
	{
		printf("Codigo: %d", cdt_funcionario[i].codigo);
		printf("Nome do funcionario: %s", cdt_funcionario[i].nome);
		printf("\nEndereco\n");
		printf("Nome da Rua: %s", cdt_funcionario[i].endereco.n_rua);
		printf("Numero: %d", cdt_funcionario[i];endereco.numero);
		printf("Bairro: %s", cdt_funcionario[i].endereco.bairro);
		printf("CEP: %s", cdt_funcionario[i].endereco.cep);
		printf("Salario: %.2f", cdt_funcionario[i].salario);
		printf("\n Data de Nascimento\n", );
		printf("Dia: %d", cdt_funcionario[i].dt_nascimento.mes);
		printf("Mes: %d", cdt_funcionario[i].dt_nascimento.mes);
		printf("Ano: %d", cdt_funcionario[i].dt_nascimento.ano);
	}
}
