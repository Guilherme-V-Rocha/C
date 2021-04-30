#include<stdio.h>

main()
{
	int num, cont, soma;
	float media;
	
	printf("Informe uma sequencia de numeros, onde o ultimo seja maior que 100\n");
	scanf("%d", &num);
	soma = 0;
	cont = 0;
	while (num <= 100)
	{
		soma += num;
		cont++;
		scanf("%d", &num);
	}
	media = 0;
	if (cont > 0) media = (float)soma / cont;
	printf("A media dos numeros e: %.2f", media);
}
