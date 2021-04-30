/*1) Quais serão os resultados de j e c nos programas abaixo:*/

#include <stdio.h>
#include <stdlib.h>
main()
{
	int i = 99, j;
	int *p;
	p = &i;
	j = *p + 100;
	printf("%d\n", j);
}*/

/* resposta da j eh 199 */

#include <stdio.h>
#include <stdlib.h>
main()
{
	int a = 5, b = 12;
	int *p;
	int *q;
	p = &a;
	q = &b;
	int c = *p + *q;
	printf("%d", c);
}*/

/*resposa da c eh 17 */

/*2) Seja o seguinte trecho de programa:*/

#include <stdio.h>
#include <stdlib.h>
main()
{
	int i=3, j=5,subtracao, calcular;
	int *p, *q;
	p = &i;
	q = &j;
	subtracao = *p - *q;
	calcular = 3 - *p/(*q) + 7 ;
	/*printf("%d", subtracao); */
	/*printf("%d", calcular); */	
/*}

/*Qual é o valor das seguintes expressões?*/
	/*a) *p - *q 
	respota de a) eh = -2 */
	/*b)  3 - *p/(*q) + 7  
	respota da b) eh = 10*/


/*3) Qual o valor de y no final do programa?
Tente descobrir para que verifiquemos o resultado via DEV-C. A seguir, escreva um /* comentário */ /*em cada comando de atribuição explicando o que 
ele faz e o valor da variável após sua execução.*/

#include <stdio.h>
main()
{
	int y, *p, x; 			/* declara o tipo de variavel e caso venha ter " * ", significa um ponteiro */
	y = 0;		  			/* y recebe uma valor ex: 0 */
	p = &y;  	  			/* p recebe o endereco do y */
	x = *p;  	  			/* x recebe o ponteiro de *p que aponta para um endereco */
	x = 4;   	  			/* x recebe um valor 4*/
	(*p)++;  	  			/* *p recebe 1 */
	x--;	 	  			/* x valor vira 3*/
	(*p) += x;    			/* *p ponteiro irá somar quando receber x */
	printf ("y = %d\n", y); /* valor de y eh 4 */
} 

/*4) Seja a seguinte sequência de instruções em um programa C:*/

#include <stdio.h>
#include <stdlib.h>
main()
{
	int *pti;
	int i = 10;
	pti   = &i;
}
/*Qual afirmativa é falsa? */
	/*a)	pti armazena o endereço de i */
	/*b)	*pti é igual a 10 */
	/*c)	ao se incluir *pti = 20; na última linha, i passará a ter o valor 20 */ 
	/*d)	ao se alterar o valor de i, *pti será modificado */
	/*e)	pti é igual a 10 */
/* resposta afirmativa falsa eh b) */


/*5) Na sequência de instruções abaixo:*/

#include <stdio.h>
#include <stdlib.h>
main()
{
	float f; 
	float *pf; 
	pf = &f; 
	scanf("%f", pf); 
	printf("%f", *pf);
}
	/*a)	Efetuamos a leitura de f */
	/*b)	Não efetuamos a leitura de f */
	/*c)	Temos um erro de sintaxe */
	/*d)	Deveríamos estar usando &pf no scanf */
	/*e)	Nenhuma das opções anteriores */
/* Resposta eh b)*/

/*6) Considere o programa abaixo e procure entender o que será impresso, bem como a diferença na notação de ponteiros em p2 = &j e *p2 = temp. */

#include <stdio.h>
#include <stdlib.h>
main()
{
	int i = 10, j = 20;
	int temp;
	int *p1, *p2;
	p1   = &i;		/* p1 recebe endereco de i */
	p2   = &j;		/* p2 recebe endereco de j */
	temp = *p1;		/* conteudo apontado por p1 para temp */ 
	*p1  = *p2;		/* conteudo apontado por p2 para o apontado p1 */ 
	*p2  = temp;	/* conteudo apontado por p1 para p2 */ 
	
	/* O que sera impresso ???? */ 
	
	printf(" % d % d \n", i, j);
	/* Sera impresso 20 e 10 */
}


