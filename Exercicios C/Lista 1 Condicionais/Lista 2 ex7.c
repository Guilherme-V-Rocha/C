#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
7.	As ma��s custam R$ 0,80 cada se forem compradas menos de uma d�zia e R$ 0,70 se forem compradas pelo menos 12. 
Escreva um algoritmo que leia o n�mero de ma��s compradas, calcule e escreva o custo total da compra.
*/
main()
{
	int macao;
	float calcule;
	printf("Digite a quantidade de macao pegas:\n");
	scanf("%d", &macao);
	if (macao < 12){
		calcule = macao * 0.80;
		printf("Custo total %2.f",calcule);
	}else{
		calcule = macao * 0.70;
		printf("Custo total %2.f",calcule);
	}
}
