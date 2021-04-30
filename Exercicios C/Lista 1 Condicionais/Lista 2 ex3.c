#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
3.	Ler 4 notas, calcular a média e apresentar as mensagens "Aprovado" ou "Reprovado" conforme o resultado da média encontrada.  
Para aprovação, a média deverá ser maior ou igual a 7.
*/
main(){
	float n1,n2,n3,n4,media;
  printf("Digite cada nota\n");
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);
  scanf("%f", &n4);
  media = (n1+n2+n3+n4)/4;
  if (media > 7.0){
  	printf("Aprovado");
  }
  else if(media < 7.0){
  	printf("Reprovado");
  }
}
