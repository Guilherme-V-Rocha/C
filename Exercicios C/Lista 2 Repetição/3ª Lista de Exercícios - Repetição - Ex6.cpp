#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
   int dia, venda, maior_venda, dia_maior_venda;
   printf("Informe a venda para os 31 dias\n");
   
   for (dia = 1; dia <= 7; dia++)
   {
        scanf("%d", &venda);
        
        if (dia == 1)
        {
            maior_venda     = venda;
            dia_maior_venda = dia;
        }
        else if (venda > maior_venda)
             {
                 maior_venda     = venda;
                 dia_maior_venda = dia;
             }
   }
   
   printf("Maior Venda..........: %d\n", maior_venda);
   printf("Dia da Maior Venda...: %d", dia_maior_venda);
   
   getch();
}
