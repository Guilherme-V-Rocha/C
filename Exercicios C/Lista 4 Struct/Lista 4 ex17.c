#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 5

/*
.Defina uma estrutura que ir� representar bandas de m�sica. Essa estrutura deve ter o nome da banda, que tipo de m�sica ela toca, o n�mero de
integrantes e em que posi��o do ranking essa banda est� dentre as suas 5 bandas favoritas. 
Inclua nessa estrutura 4 registros por meio um ponteiro. 
A partir dessa estrutura, desenvolva:?
	Uma fun��o que pe�a ao usu�rio um n�mero de 1 at� 5. Em seguida, seu programa deve exibir informa��es da banda cuja posi��o no seu ranking 
	� a que foi solicitada pelo usu�rio.?    
	Uma  fun��o  que  pe�a  ao  usu�rio  um  tipo  de  m�sica  e  exiba  as bandas com esse tipo de m�sica no seu ranking. ? 
	Uma fun��o que pe�a o nome de uma banda ao usu�rio e diga se ela est� entre suas bandas favoritas ou n�o.
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
			printf("Est� nos seus favorito ou nao: ");
			scanf("%s", &opcao);	
		}
		else if(opcao == "sim")
		{
			printf("Foi colocado nos favoritos.");
		}
		else printf("Nao foi colocado nos seus favoritos");
	}
	

	
	
};
