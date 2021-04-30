#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
11.	Faça uma função que recebe um vetor X de 30 elementos inteiros, por parâmetro, e retorna, também por parâmetro, dois vetores A e B. 
O vetor A deve conter os elementos pares de X e o vetor B, os elementos ímpares.
*/


int vetorA_B(int x[30])
{
	int i, parA[30], imparB[30], count = 0, count1 = 0;
	for(i = 0; i < 30; i++)
	{
		if(x[i] % 2 == 0)
		{
			parA[count] = x[i];
			count++;
		}
		else if(x[i] % 2 != 0)
		{
			imparB[count1] = x[i];
			count1++;
		}
	}
	for(i = 0; i < count; i++)
	{
		printf("%d Par\n\n", parA[i]);
	}
	for(i = 0; i < count1; i++)
	{
		printf("%d Impar\n\n", imparB[i]);
	}
	
}
main()
{
	int i, xvetor[30]; 
	printf("Digite 30 numeros:\n");
	for(i = 0; i < 30; i++)
	{
		scanf("%d", &xvetor[i]);
		
	}
	vetorA_B(xvetor);
	return 0;
}
