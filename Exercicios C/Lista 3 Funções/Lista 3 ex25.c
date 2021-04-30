#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
25.	Um número é dito ser capicua quando lido da esquerda para a direita é o mesmo que quando lido da direita para a esquerda. 
O ano "2002", por exemplo, é capicua. Elabore então, uma função para verificar se um número possui essa característica. 
Caso o número seja capicua, o programa principal deve escrever essa informação na tela.
*/
int capicua(int x, char capi[])
{
	char ipac[20];
	int i = 0, capicuax, n = x;
	while(x > 0)
	{
		i = i * 10 + (x % 10);
		x = x /10;
		if(i == x)
		{
			strcpy(ipac,"Eh capicua\n");	
		}else strcpy(ipac,"Nao eh caipuca\n");
	}

	
	strcpy(capi, ipac);
}

main()
{
	int numero;
	char capicu[20];
	printf("Digite algo que seja capicua.\n\n");
	printf("Digite um numero: ");
	scanf("%d", &numero);
	capicua(numero, capicu);
	printf("%s", capicu);
}
