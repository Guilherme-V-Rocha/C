#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
1.	Crie duas fun��es, cada uma com o objetivo de somar dois n�meros reais quaisquer. A primeira deve retornar a soma dos n�meros via par�metro. 
A segunda deve retornar essa soma para o nome da fun��o.
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
