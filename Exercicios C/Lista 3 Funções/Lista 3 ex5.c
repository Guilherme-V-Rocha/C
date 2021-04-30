#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*
5.	Escreva uma sub-rotina que recebe, por par�metro, 2 valores e uma letra. 
	O primeiro valor � um saldo existente em uma conta banc�ria, o outro valor representa um cr�dito ou d�bito a esse saldo. 
	Se a letra for C (cr�dito), o procedimento deve acrescer o valor ao saldo, caso a letra seja D (d�bito) o valor ser� deduzido do saldo. 
	Garanta que a letra passada como par�metro ao procedimento seja obrigatoriamente C ou D. 
	Retorne para o programa principal o saldo atualizado da conta banc�ria.
*/
float sub_rotina(float s_cartao, int valor, char c_bancaria)
{
	float subtracao = 0, soma = 0, saldo;
	saldo = s_cartao;
	if (c_bancaria == 'C')
	{
		soma = valor * 31;
		subtracao = saldo - soma;	
	}
	else if (c_bancaria == 'D')
	{
		subtracao = saldo - valor;
	}
	return subtracao;
}
main()
{
	char tp_bancaria, subrotina;
	float saldo_cartao, valor, r;
	printf("\nPasso o valor do saldo ja existente na sua conta bancaria.\n");
	scanf("%f", &saldo_cartao);
	do    
	{      
		printf("Escolhe Credito 'C' ou Debito 'D'.\n");    
		scanf("%s", &tp_bancaria);
		fflush(stdin); 
	}   while ( (toupper(tp_bancaria)!= 'C') && (toupper(tp_bancaria) != 'D'));
	
	printf("\nPassa o valor de credito ou debito.\n");
	scanf("%f", &valor);
	r =  sub_rotina(saldo_cartao, valor, tp_bancaria);
	printf("\nSaldo atualizado da conta bancaria: %.2f", r);
}
