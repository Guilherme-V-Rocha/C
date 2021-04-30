#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
6.	Considere que uma determinada operadora de telecomunicações disponibiliza aos seus clientes o seguinte plano tarifário:	
		Preço por minuto = R$ 0,30 - para os 10 primeiros minutos; 
		11º minuto e seguintes cobrados a R$ 0,05 por minuto.
Faça um algoritmo que leia a duração da chamada em minutos e apresente o tempo de duração da chamada em horas e minutos e o preço a pagar pela chamada.
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

