#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
/*
25.	Um n�mero � dito ser capicua quando lido da esquerda para a direita � o mesmo que quando lido da direita para a esquerda. 
O ano "2002", por exemplo, � capicua. Elabore ent�o, uma fun��o para verificar se um n�mero possui essa caracter�stica. 
Caso o n�mero seja capicua, o programa principal deve escrever essa informa��o na tela.
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
