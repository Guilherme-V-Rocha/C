#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
8.	Escreva uma fun��o que calcule e retorne a soma de todos os n�meros entre dois n�meros passados por par�metro.
*/
int somaintervalo(int x, int x1)
{
	int i, somador_intervalo = 0;
	for(i = x; i < x1; i++)
	{
		somador_intervalo += i;
	}
	return somador_intervalo;
}
main()
{
	int n1, n2, s_intervalo;
	printf("Digite dois numero que simule um intervalo.\n\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	s_intervalo = somaintervalo(n1, n2);
	printf("Soma entre numeros: %d", s_intervalo);
}
