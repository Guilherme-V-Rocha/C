#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 10

/*
Considere um arquivo binário de registros (denominado “alunos.bin”) onde cada registro armazena as 
seguintes informações sobre um aluno qualquer de uma turma de, no máximo, 50 alunos: matrícula 
(cadeia de 3 caracteres), nome (cadeia de 30 caracteres) e três notas referentes às avaliações feitas pelo
 aluno (valores reais entre 0 e 10). Faça um programa que leia este arquivo e apresente a matrícula, 
 o nome, a nota média (a soma das três notas dividida por três) e o conceito (“excelente” se a média 
 for maior ou igual a 8.5,
 “bom” se a média for maior ou igual a 7.0 e menor que 8.5, e “preocupante” se a média for menor que 7.0) 
 de cada aluno da turma. 
*/