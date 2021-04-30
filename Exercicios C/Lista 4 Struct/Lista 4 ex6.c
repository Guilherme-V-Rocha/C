#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct Endereco
{
	
	char n_rua[120];
	char bairro[120];
	char cidade[120];
	char estado[120];
	char cep[120];
	
};

struct Cadastro
{
	
	char nome[120];
	struct Endereco endereco;
	float salario;
	char rg[120];
	char cpf[120];
	char estado_c[120];
	int telefone;
	int idade;
	char genero[120];
	
};

main()
{
	struct Cadastro cadastro;
	
	printf("Nome: ");
	gets(cadastro.nome);
	printf("\nEndereco\n");
	printf("Nome da Rua: ");
	gets(cadastro.endereco.n_rua);
	printf("Bairro: ");
	gets(cadastro.endereco.bairro);
	printf("Cidade: ");
	gets(cadastro.endereco.cidade);
	printf("Estado: ");
	gets(cadastro.endereco.estado);
	printf("CEP: ");
	gets(cadastro.endereco.cep);
	printf("Salario: ");
	
	fflush(stdin);
	
	scanf("%f", &cadastro.salario);
	printf("RG: ");
	gets(cadastro.rg);
	printf("CPF: ");
	gets(cadastro.cpf);
	printf("Estado Civil: ");
	gets(cadastro.estado_c);
	printf("Telefone: ");
	scanf("%d", &cadastro.telefone);
	printf("Idade: ");
	scanf("%d", &cadastro.idade);
	printf("Genero: ");
	gets(cadastro.genero);
	
	system("cls");
	
	printf("Nome: %s | Endereco | Salario: %.2f\nRG: %s | CPF: %s | Estado Civil: %s\nTelefone: %d | Idade: %d | Genero: %s", cadastro.nome, cadastro.salario, cadastro.rg, cadastro.cpf, cadastro.estado_c, cadastro.telefone, cadastro.idade, cadastro.genero);
	printf("%s | %s | %s\n %s | %s ", cadastro.endereco.n_rua, cadastro.endereco.bairro, cadastro.endereco.cidade, cadastro.endereco.estado, cadastro.endereco.cep);

}
