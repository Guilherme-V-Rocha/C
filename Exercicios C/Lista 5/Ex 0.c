#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 10

/*
Defina um arquivo de structs (registros) que dará condições de armazenar informações de veículos: placa, marca, modelo, ano de fabricação e preço 
médio. Uma vez definida essa estrutura, inclua um número de registros no arquivo levando-se em conta a seguinte pergunta: “Incluir Novo Veículo 
(S/N)?”. 
Além disso, você deverá contar quantos veículos são da marca VOLKSWAGEN, encontrar o valor médio de todos os veículos e calcular o percentual da 
quantidade de veículos com menos de cinco anos de uso com relação à quantidade total de veículos.
*/

typedef struct carro
{
    char placa[10];
    char marca[25];
    char modelo[25];
    int ano_fabricao;
    float p_medio;

};

main()
{
    struct carro rveiculos[MAX];
    int i, cont_marca = 0, cont_ano = 0, cont_veiculo = 0;
    float preco_total = 0, perc_ano;
	char op;
    
    cont_veiculo = cont_ano = cont_marca = 0;
    FILE *arquivo_veiculos = fopen("Dados_Veiculos", "wb");
    
    if (arquivo_veiculos == NULL)
    {
        arquivo_veiculos = fopen("Dados_Veiculos", "ab");
    }
    
    for(i = 0; i < MAX; i++)
    {
    	do
		{
        	system("cls");
        	fflush(stdin);
        	printf("Digite a placa do carro...: ");
        	gets(rveiculos[i].placa);
        	printf("Digite a marca do carro...: ");
        	gets(rveiculos[i].marca);
        	printf("Digite o modelo do carro..: ");
        	gets(rveiculos[i].modelo);
        	printf("Digite o ano de fabricacao: ");
        	scanf("%d", &rveiculos[i].ano_fabricao);
        	printf("Digite o valor do veiculo.: ");
        	scanf("%f", &rveiculos[i].p_medio);
        	fflush(stdin);
        	printf("Incluir Novo Veiculo: ");
        	gets(op);
    	}while(toupper(op) == "S");
    }
    fclose(arquivo_veiculos);
    
    arquivo_veiculos = fopen("Dados_Veiculos", "rb");
    while (fread(&rveiculos, sizeof(struct carro), 1, arquivo_veiculos))  
    {    
  		if (strcmp(rveiculos[i].marca, "VOLKSWAGEN") == 0) cont_marca++;    
  	    if ((2020 - rveiculos[i].ano_fabricao) < 5) cont_ano++;    
		preco_total += rveiculos[i].p_medio;    
		cont_veiculo++;  
    }
	fclose(arquivo_veiculo);
	
	perc_ano = (cont_ano / cont_marca) * 100;
	printf("\n");  
	printf("Quantidade de Veiculos Cadastrados..........: %d \n"   , cont_veiculo);   
	printf("Total de Veiculos da Marca VOLKSWAGEN.......: %d \n"   , cont_marca);  
	printf("Percentual de Veiculos com Menos de 5 anos..: %.2f \n" , perc_ano);  
	printf("Valor Medio dos Veiculos....................: %.2f \n" , preco_total / cont_veiculo);  
	getch();
}

