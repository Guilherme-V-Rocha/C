#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 5

/*
.Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de
integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas. 
Inclua nessa estrutura 4 registros por meio um ponteiro. 
A partir dessa estrutura, desenvolva:?
	Uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking 
	é a que foi solicitada pelo usuário.?    
	Uma  função  que  peça  ao  usuário  um  tipo  de  música  e  exiba  as bandas com esse tipo de música no seu ranking. ? 
	Uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não.
*/

struct est_banda
{
	
	char n_banda[120];
	char tp_musica[125];
	int n_integrantes;
	int n_posicao;
	
};

main()
{
	struct est_banda estrutura_banda[MAX];
	int i, pos;
	char tp_musica;
	
	for(i = 1; i < MAX + 1; i++)
	{
		
		printf("Banda: ");
		gets(estrutura_banda[i].n_banda);
		fflush(stdin);
		printf("Tipo de musica: ");
		gets(estrutura_banda[i].tp_musica);
		printf("Numero de integrantes: ");
		scanf("%d", &estrutura_banda[i].n_integrantes);
		printf("Posicao no ranking: ");
		scanf("%d", &estrutura_banda[i].n_posicao);
		
	}
	system("cls");
	printf("Digite 1 a 5 para ver o ranking da banda: ");
	scanf("%d", &pos);
	printf("%s", estrutura_banda[pos].n_banda);
	printf("%d", estrutura_banda[pos].n_integrantes);
	
	printf("Escolha um tipo de musica: ");
	scanf("%s", &tp_musica);
	for(i = 0; i < MAX + 1; i++)
	{
		if(tp_musica == estrutura_banda[i].tp_musica)
		{
			printf("%d - %s", estrutura_banda[i].n_posicao, estrutura_banda[i].n_banda);
		}
	}
	printf("Passa uma nome de banda: ");
	scanf("%s", &n_banda)
	for(i = 0; i < MAX + 1; i++)
	{
		if(n_banda == estrutura_banda[i].n_banda)
		{
			printf("Está nos seus favorito ou nao: ");
			scanf("%s", &opcao);	
		}
		else if(opcao == "sim")
		{
			printf("Foi colocado nos favoritos.");
		}
		else printf("Nao foi colocado nos seus favoritos");
	}
	

	
	
};
