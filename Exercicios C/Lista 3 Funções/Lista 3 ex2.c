#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

/*
2.	Desenvolva uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (V = 4/3*R3), devolvendo-o para o programa principal. 
*/
float calcula_volume(float x)
{
	float volume;
	volume = (4/3) * pow(x,3);
	return volume;
}
main()
{
	float r, vol;
	printf("Digite o raio da esfera:\n");
	scanf("%f", &r);
	vol = calcula_volume(r);
	printf("O volume eh: %2.f ", vol);
}

