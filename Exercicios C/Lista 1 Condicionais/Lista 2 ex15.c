#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
15.	Dado o salário de um funcionário, elabore um algoritmo que efetua o cálculo do reajuste deste salário. 
Considere que o funcionário deverá receber um reajuste de 15% para salário inferior a R$ 500,00. 
Se o salário for maior ou igual que R$ 500,00, mas menor ou igual que R$ 1000,00 seu reajuste 
será de 10% e caso seja maior que R$ 1000,00 o reajuste é de 5%.
*/
main ()
{
	float salario, calculo;
	if (salario < 500.00)
	{
		calculo = salario + (salario * 0.15);
		printf("Reajuste de salario foi de: %f", calculo);
	}
	else if ((salario >= 500.00) && (salario < 1000.00))
	{
		calculo = salario + (salario * 0.10);
		printf("Reajuste de salario foi de: %f", calculo);
	}
	else if (salario > 1000.00)
	{
		calculo = salario + (salario * 0.05);
		printf("Reajuste de salario foi de: %f", calculo)
	}
}
