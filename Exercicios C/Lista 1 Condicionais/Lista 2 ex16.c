#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
16.	Fazer um algoritmo para ajudar no c�lculo do sal�rio de um funcion�rio.  
O sistema deve pedir:
	-nome do funcion�rio
	-sal�rio bruto
	-n�mero de dependentes e deve mostrar:
	-nome do funcion�rio e
	-sal�rio l�quido
Considere a seguinte regra para o c�lculo:
	-Sal�rio L�quido = Sal�rio Bruto - Desconto INSS + (15,00 * N�mero de Dependentes) + Aux�lio Passagem (40,00) + Aux�lio Refei��o (100,00)
	-Sal�rio Bruto	Desconto INSS (Percentual sobre o Sal�rio Bruto)
	-At� 300	8,00%
	-De 301 a 700	9,00%
	-Acima de 700	10,00%

*/
main()
{
	float salario_l, salario_b, inss;
	int numero_dep;
	char nome[50];
	printf("Digite seu salario bruto:\n");
	scanf("%f", &salario_b);
	printf("Digite o numero de dependentes:\n");
	scanf("%d", &numero_dep);
	printf("Digite seu nome:\n");
	scanf("%s", nome);
	if (salario_b <= 300.00)
	{
		salario_l = salario_b - 0.08+ (15,00 * numero_dep) + 40,00 +100,00;
		printf("Funcionario: %s\nSalario liquido: %2.f", nome, salario_l);
	}
	else if ((salario_b >= 301.00) && ( salario_b <= 700))
	{
		salario_l = salario_b - 0.09+ (15,00 * numero_dep) + 40,00 +100,00;
		printf("Funcionario: %s\nSalario liquido: %2.f", nome, salario_l);
	}
	else if (salario_b > 700)
	{
		salario_l = salario_b - 0.10 + (15,00 * numero_dep) + 40,00 +100,00;
		printf("Funcionario: %s\nSalario liquido: %2.f", nome, salario_l);
	}
	getch();
}
