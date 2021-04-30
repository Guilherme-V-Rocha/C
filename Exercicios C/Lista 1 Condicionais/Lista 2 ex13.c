#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
13.	Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A seguir, encontre o maior dos 3 valores e o escreva com a mensagem: "É o maior ".
*/

main()
{
	int a, b, c;
	printf("Digite 3 valores:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if ((a > b) && (a > c))
	{
		printf("Eh maior: %d", a);
	}
	else if((b > a) && (b > c))
	{
		printf("Eh maior: %d", b);
	}
	else if((c > a) && (c > b))
	{
		printf("Eh maior: %d", c);
	}
}
