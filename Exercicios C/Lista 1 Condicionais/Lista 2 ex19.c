#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
19.	Leia a velocidade m�xima permitida em uma avenida e a velocidade com que o motorista estava dirigindo na mesma e calcule a multa que a 
pessoa ir� receber, sabendo que s�o pagos:
"	50 reais se o motorista ultrapassar em at� 10km/h a velocidade permitida (ex.: velocidade m�xima: 50km/h; motorista a 60km/h ou a 56km/h); 
"	100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
"	200 reais, se estiver acima de 31km/h da velocidade permitida.
*/
main()
{
	int motorista, pago, multa;
	printf("Digite a velocidade do motorista:\n");
	scanf("%d", &motorista);
	printf(" 50 reais se o motorista ultrapassar em at� 10km/h a velocidade permitida.\n 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida. \n 200 reais, se estiver acima de 31km/h da velocidade permitida."); 				
	printf("Digite o valor da sua nota:\n");
	scanf("%d", &pago);
	if (motorista == 70)
	{
		multa = pago - 50;
		printf("%d", multa);
	}
	else if ((motorista > 71) && (motorista < 90))
	{
		multa = pago - 100;
		printf("%d", multa);
	}
	else if (motorista > 91)
	{
		multa = pago - 200;
		printf("%d", multa);
	}
}
