#include <stdio.h>

main()
{
	int num, cont;
	printf("Informe um numero inteiro para a apresentação da tabuada\n");
	scanf("%d", &num);
	for (cont = 1; cont <= 10; cont++)
	{
		printf("%d x %d = %d\n", num, cont, num*cont);
	}
}
