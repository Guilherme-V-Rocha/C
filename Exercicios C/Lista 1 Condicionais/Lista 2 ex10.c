#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
10.	Fa�a um programa que leia o sal�rio de um funcion�rio e calcule seu novo sal�rio baseado na seguinte regra:
"	Sal�rios at� R$ 800,00, reajuste de 10%;
"	Sal�rios acima de R$ 800,00 e menores que R$ 1.500,00, reajuste de 7,5%.
"	Sal�rios de R$ 1.500,00 para cima, reajuste de 5%.
*/
main()
{
	float salario, calculo;
	printf("Digite o seu salario:\n");
	scanf("%f", &salario);
	if (salario <= 800.00)
	{
	 calculo = salario + (salario * 0.10);
	}
	else if ((salario > 800.00) && (salario <= 1500.00))
	{
	 calculo = salario + (salario * 0.075);
	}
	else if(salario > 1500.00)
	{
	 calculo = salario + (salario * 0.05);
	}
	printf("O seu novo salario eh de: %2.f", calculo);
}
