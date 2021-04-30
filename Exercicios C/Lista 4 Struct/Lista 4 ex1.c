#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


struct registro
{
	char nome[120];
	char naturalidade[120];
	char nrg[120];
	char cpf[120];
	
};

main()
{
	struct registro rg;
	
	printf("\nDigite os dados contida no RG\n");
	printf("Nome.........: ");
	gets(rg.nome);
	printf("Naturalidade.: ");
	gets(rg.naturalidade);
	//scanf("%s", &rg.nome);
	printf("Numero do RG.: ");
	gets(rg.nrg);
	//scanf("%s", &rg.nrg);
	printf("Numedo do CPF: ");
	gets(rg.cpf);
	//scanf("%s", &rg.cpf);
	
	system("cls");
	
	printf("Senhor %s \nNumero do documento %s e CPF %S", rg.nome, rg.nrg, rg.cpf);
}
