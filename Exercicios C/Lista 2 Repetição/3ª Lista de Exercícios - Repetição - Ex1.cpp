#include <stdio.h>

main()
{
	float soma, num;
	int cont;
	printf("Informe 10 numeros reais\n");
	soma = 0;
	for (cont = 1; cont <= 10; cont++)
	{
		scanf("%f", &num);
		soma += num;
	}
	printf("A soma dos 10 numeros e: %.2f", soma);
}

