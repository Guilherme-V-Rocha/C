#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

/*
4.	Fa�a uma fun��o que leia 50 n�meros inteiros e positivos e retorne a m�dia e o menor desses 50 n�meros para o programa principal.
*/

void media_menor50(int x, int *calculo, int *me)
{
	int menor, i, n, soma = 0;
	printf("Digite os numeros:\n");
	for(i = 1; i < x + 1; i++)
	{
		scanf("%d", &n);
		soma += n;
		*calculo = soma / n;
		if (i == 1)
		{
			menor = n;
		}
		else if (n < menor)
		{
			menor = n;
		}
		*me = menor;
	}
}
main()
{
	int qtdx, media, menor;
	printf("Digite uma quantidade de numeros que queira digitar:\n");
	scanf("%d", &qtdx);
	media_menor50(qtdx, &media, &menor);
	printf("Media: %d\n\nMenor numero: %d", media, menor);
	getch();
}

