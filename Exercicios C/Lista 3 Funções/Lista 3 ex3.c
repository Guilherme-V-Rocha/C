#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

/*
3.	Crie uma fun��o que receba uma quantidade de n�meros e retorne para o programa principal o maior e o menor n�mero. 
A quantidade de n�meros que ser�o informados dentro da fun��o, vir� do programa principal.
*/

void maior_menor(int x, int *ma, int *me)
{
	int maior, menor, i, n;
	printf("Digite os numeros:\n");
	for(i = 1; i < x + 1; i++)
	{
		scanf("%d", &n);
		if (i == 1)
		{
			
			menor = n;
			maior =n;
		}
		else if (n < menor)
		{
			menor = n;
		}
		else if(n > maior)
		{
			maior = n;
		}
		*ma = maior;
		*me = menor;
	}
}
	
main()
{
	int numeros, x, x1;
	printf("Digite uma quantidade de numeros que queira digitar:\n");
	scanf("%d", &numeros);
	maior_menor(numeros, &x, &x1);
	printf("%d maior e %d menor numero:  ", x, x1);
}
