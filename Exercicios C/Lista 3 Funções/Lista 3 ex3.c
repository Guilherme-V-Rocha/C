#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

/*
3.	Crie uma função que receba uma quantidade de números e retorne para o programa principal o maior e o menor número. 
A quantidade de números que serão informados dentro da função, virá do programa principal.
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
