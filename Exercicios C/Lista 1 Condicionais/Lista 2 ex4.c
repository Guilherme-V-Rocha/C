#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
4.	Dados dois números apresentar 60% da diferença do maior pelo menor valor.
*/
main(){
	int x, y, subtracao;
	float diferenca;
	printf("Digite dois numeros:\n");
	scanf("%d", x);
	scanf("%d", y);
	if (x > y){
		subtracao = x - y;
		diferenca = subtracao * 0.6;
		printf("Diferenca e de %2.f ", diferenca);
	}
	else if(y > x){
		subtracao = y - x;
		diferenca = subtracao * 0.6;
		return diferenca;
	}
}
