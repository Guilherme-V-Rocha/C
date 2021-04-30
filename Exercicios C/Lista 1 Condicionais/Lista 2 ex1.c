#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
1.	Fazer um algoritmo que leia a capacidade de um elevador e o peso de 5 pessoas individualmente.  
O algoritmo deve retornar se o elevador está liberado para subir ou se excedeu a carga máxima.

*/
main(){
	float a, b, c, d, e;
	printf("Digite o peso da 1 pessoa: ");
	scanf("%f", &a);
	printf("Digite o peso da 2 pessoa: ");
	scanf("%f", &b);
	printf("Digite o peso da 3 pessoa: ");
	scanf("%f", &c);
	printf("Digite o peso da 4 pessoa: ");
	scanf("%f", &d);
	printf("Digite o peso da 5 pessoa: ");
	scanf("%f", &e);
	if ((a + b + c + d + e) > 450){
		printf("Excedeu a carga maxima");
	}
	else if ((a + b + c + d + e) < 450){
		printf("Liberado");
	}
}
