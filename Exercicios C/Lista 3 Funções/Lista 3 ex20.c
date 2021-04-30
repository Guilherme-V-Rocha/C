#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
20.	Faça uma função que recebe a idade de um nadador por parâmetro e retorna, também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:   
	Idade	Categoria
	5 a 7 anos	Infantil A
	8 a 10 anos	Infantil B
	11-13 anos	Juvenil A
	14-17 anos	Juvenil B
	Maiores de 18 anos (inclusive)	Adulto
*/
int idade_nadador(int idade, char c_categoria[])
{
	char tp_categoria[30];
	if ((idade >= 5) && (idade <= 7))
	{
		strcpy(tp_categoria,"Categoria: Infantil A");
	}
	else if ((idade >= 8) && (idade <= 10))
	{
		strcpy(tp_categoria,"Categoria: Infantil B");
	}
	else if ((idade >= 11) && (idade <= 13))
	{
		strcpy(tp_categoria,"Categoria: Juvenil A");
	}
	else if ((idade >= 14) && (idade <= 17))
	{
		strcpy(tp_categoria,"Categoria: Juvenil B");
	}
	else if (idade > 18)
	{
	  strcpy(tp_categoria,"Categoria: Adulto ");
	}
	strcpy(c_categoria,tp_categoria);
}
main()
{
	int idade;
	char categoria_nadador[30];
	printf("Digite a idade do nadador:\n");
	scanf("%d", &idade);
	idade_nadador(idade, categoria_nadador);
	printf("%s", categoria_nadador);
	
}
