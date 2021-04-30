#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 10

/*
Para controlar as peças que são comercializadas 
na loja de suprimentos de informática Tudo Barato Ltda, o gerente da loja criou o seguinte registro, 
contendo os campos relacionados abaixo: 

IDENTIFICAÇÃO DA PEÇA 

DESCRIÇÃO DA PEÇA 

FABRICANTE 

ANO DE FABRICAÇÃO 

PREÇO UNITÁRIO 

QUANTIDADE DISPONÍVEL 

Com base na descrição acima, cria um arquivo que possa: 

Definir um tipo registro com o seguinte nome: REG; 

Declarar uma variável registro, do tipo REG com o nome de REG_PECA; 

Realizar as leituras dos valores para um número INDETERMINADO de registros, onde a 
última identificação de peça é zero e não será considerada. 

Calcular: 

quantas peças foram fabricadas no ano de 2009? 

quantas peças são mais caras que 1000 reais? 

somatório dos preços de todas as peças com identificação ímpar e preço maior que 30 reais; 

qual o preço da peça mais cara? 

qual o preço da peça mais barata? 

O último suprimento a ser informado deve ter a IDENTIFICAÇÃO DA PEÇA igual a zero e não poderá 
fazer parte dos cálculos. 
*/