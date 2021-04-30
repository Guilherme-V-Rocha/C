#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 10

/*
Considere um arquivo texto (denominado “dados.txt”) que contém, em cada registro, as seguintes 
informações sobre os modelos de uma determinada agência: 

nome (cadeia de 30 caracteres, ocupando as colunas de 1 a 30 do arquivo texto); 

sexo (um caractere, ocupando a coluna 31 do arquivo texto, podendo ser ‘M’ ou ‘F’); 

cor dos olhos (um caractere, ocupando a coluna 32 do arquivo texto, podendo ser ‘A’, ‘B’, ‘C’, ou ‘D’); 

altura (valor real em metros, ocupando as colunas de 34 a 37 do arquivo texto); 

peso (valor real em quilos, ocupando as colunas de 39 a 43 do arquivo texto). 

Faça um programa que separe este arquivo texto em dois arquivos binários de registros cujos campos são as 
informações descritas acima: o 1º arquivo deve conter apenas os modelos do sexo masculino (‘M’) e o 
2º arquivo deve conter apenas os modelos do sexo feminino (‘F’). 
*/