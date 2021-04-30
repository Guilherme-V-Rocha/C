#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 10


/*
Considere um arquivo binário (denominado “boleta.bin”) que contém registros de operações da Bolsa 
de Valores. 
Cada operação de compra e venda que um cliente realiza na Bolsa gera um registro com o número do cliente 
(valor inteiro), o código da operação (um caractere, podendo ser ‘V’ para Venda ou ‘C’ para compra), 
a quantidade de títulos comercializados (valor inteiro) e o valor unitário de cada título (valor real). 
Estes registros estão organizados seqüencialmente no arquivo “boleta.bin” de tal modo que todos os 
registros de um mesmo cliente encontram-se juntos. Faça um programa para gerar um arquivo texto 
(denominado “result.txt”), de tal forma que, em cada linha, serão colocadas as seguintes informações 
sobre um cliente: 

número do cliente, ocupando as colunas de 1 a 14 do arquivo texto; 

saldo apurado, ocupando as colunas de 16 a 30 do arquivo texto; 

tipo de saldo, ocupando a coluna 32 do arquivo texto, podendo ser ‘C’ (credor) se o valor vendido 
for menor que o valor comprado, ou ‘D’ (devedor), caso contrário.  
*/