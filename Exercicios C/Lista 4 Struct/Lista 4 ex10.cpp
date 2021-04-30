#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 500

/*
10.	Faça um programa para ler as seguintes informações de uma pessoa: 
Nome, Idade, Sexo, Peso, Altura, Profissão, Rua, Bairro, Cidade, Estado, CEP, Telefone.
*/

struct cadastrar_pessoa
{
	char nome[MAX];
	char genero[MAX];
	char profissao[MAX];
	char rua[MAX];
	char bairro[MAX];
	char cidade[MAX];
	char estado[MAX];
	int idade;
	float peso;
	float altura;
	long int cep;
	long int telefone;
};

main()
{
	struct cadastrar_pessoa cadastro;
	fflush(stdin);
	printf("Digite seu nome: ");
	scanf("%s", &cadastro.nome);
	
	printf("\nDigite seu genero: ");
	scanf("%s", &cadastro.genero);
	
	printf("\nDigite sua profissao: ");
	scanf("%s", &cadastro.profissao);
	
	printf("\nDigite nome da rua: ");
	scanf("%s", &cadastro.rua);
	
	printf("\nDigite nome do bairro: ");
	scanf("%s", &cadastro.bairro);
	
	printf("\nDigite nome da cidade: ");
	scanf("%s", &cadastro.cidade);
	
	printf("\nDigite nome do estado: ");
	scanf("%s", &cadastro.estado);
	
	printf("\nDigite sua idade: ");
	scanf("%d", &cadastro.idade);
	
	printf("\nDigite seu peso: ");
	scanf("%f", &cadastro.peso);
	
	printf("\nDigite sua altura: ");
	scanf("%f", &cadastro.altura);
	
	printf("\nDigite o cep: ");
	scanf("%d", &cadastro.cep);
	
	printf("\nDigite seu telefone: ");
	scanf("%d", &cadastro.telefone);
	
	printf("Informacaoes de %s : \n\nIdade: %d\nGenero: %s\nPeso: %.2f\nAltura: %.2f\nProfissao: %s\nRua: %s\nBairro: %s\nEstado: %s\nCep: %d\nTelefone: %d\n", cadastro.nome, cadastro.idade, cadastro.genero, cadastro.peso, cadastro.altura, cadastro.profissao, cadastro.rua, cadastro.bairro, cadastro.cidade, cadastro.estado, cadastro.cep, cadastro.telefone);
}
