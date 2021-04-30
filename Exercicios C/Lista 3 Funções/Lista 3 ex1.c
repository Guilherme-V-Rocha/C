#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
1.	Crie duas funções, cada uma com o objetivo de somar dois números reais quaisquer. A primeira deve retornar a soma dos números via parâmetro. 
A segunda deve retornar essa soma para o nome da função.
*/
int somaf(int a, int b)
{
	int soma;
	soma = a + b;
}
void somap(int a, int b, int *soma)
{
	*soma = a + b;
}
main()
{
	int a, b, soma;
	printf("Digite dois numero:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("\nO Resultado eh: %d\n", somaf(a, b));
	
	somap(a, b, &soma);
	printf("\nO Resultado eh: %d\n", soma);
}
