#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
6.	Considere que uma determinada operadora de telecomunica��es disponibiliza aos seus clientes o seguinte plano tarif�rio:	
		Pre�o por minuto = R$ 0,30 - para os 10 primeiros minutos; 
		11� minuto e seguintes cobrados a R$ 0,05 por minuto.
Fa�a um algoritmo que leia a dura��o da chamada em minutos e apresente o tempo de dura��o da chamada em horas e minutos e o pre�o a pagar pela chamada.
*/

main(){
	float x, preco, hora;
	printf("Digite a duracao da chamada:\n");
	scanf("%f", &x);
	if (x <= 10){
		preco = x * 0.30;
		printf("Preco a pagar pela chamada de  %2.f e de R$ %2.f",x, preco);
	}
	else if (x > 11){
		preco = (x * 0.05) + 3;
		printf("Preco a pagar pela chamada de  %2.f e de R$ %2.f",x, preco);
	}
	else if (x > 60){
		hora = x / 60;
		preco = (x * 0.05) + 3;
		printf("Preco a pagar pela chamada de  %2.f e de R$ %2.f",hora, preco);
	}
}

