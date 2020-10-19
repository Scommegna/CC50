/* PSET2: "Beer" do CC50
Feito por: Lucas Scommegna Lopes 
Data: 19/10/2020 */

#include <stdio.h>
#include <cc50.h>

int
main(void)
{
    //Pergunta ao usuario o numero de garrafas para compor a cancao, solicita um inteiro e e gerado um auxiliar para o loop posterior.
    printf("Por favor, me diga quantas garrafas de cerveja ha no muro:\n");
    int GarrafasDeCerveja = GetInt();
    int ContadorAuxiliar = GarrafasDeCerveja;

    //Loop para compor as frases da cancao e condicionais para corrigir as duas frases finais da cancao.
    for(int i = 0; i < ContadorAuxiliar ; i++)
    {
        if (GarrafasDeCerveja > 2)
        {
            printf("%d garrafas de cerveja no muro, bebo uma, jogo no lixo, %d garrafas no muro...\n", GarrafasDeCerveja , GarrafasDeCerveja - 1);
            GarrafasDeCerveja--;
        }
        
        else if (GarrafasDeCerveja == 2)
        {
            printf("2 garrafas de cerveja no muro, bebo uma, jogo no lixo, uma garrafa no muro...\n");
            GarrafasDeCerveja--;
        }

        else if (GarrafasDeCerveja == 1)
        {
            printf( "Uma garrafa de cerveja no muro, bebo uma, jogo no lixo, nenhuma garrafa no muro...\n");
        }
    }

    return 0;
}