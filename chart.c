/* PSET1: "Greedy" do CC50
Feito por: Lucas Scommegna Lopes 
Data: 28/09/2020 */

#include <stdio.h>
#include <cc50.h>

int main(void)
{
    //Variaveis iniciais para receberem os valores dados pelo usuario e um booleano para sair do loop que pede as entradas
    float MprocurandoF = 0;
    float FprocurandoM = 0;
    float FprocurandoF = 0;
    float MprocurandoM = 0;
    bool entradascorretas = false;

    //Uma mensagem inicial para o usuario escrever as entradas corretas
    printf("Por favor, insira quatro valores inteiros nao negativos correspondentes a amostra feita:\n");

    //Loop que recebe as entradas e testa se as entradas dadas são numeros naturais com o valor zero incluso, caso o usuario de um valor diferente disso, o programa pede para que o usuario de a entrada errada novamente
    do
    {
        MprocurandoF = GetInt();
        if(MprocurandoF < 0)
        {
            printf("Por favor, insira um numero inteiro nao negativo:\n");
            MprocurandoF = GetInt();
        }

        FprocurandoM = GetInt();
        if(FprocurandoM < 0)
        {
            printf("Por favor, insira um numero inteiro nao negativo:\n");
            FprocurandoM = GetInt();
        }

        FprocurandoF = GetInt();
        if(FprocurandoF < 0)
        {
            printf("Por favor, insira um numero inteiro nao negativo:\n");
            FprocurandoF = GetInt();
        }

        MprocurandoM = GetInt();
        if(MprocurandoM < 0)
        {
            printf("Por favor, insira um numero inteiro nao negativo:\n");
            MprocurandoM = GetInt();
        }

        if (MprocurandoF >=0 && FprocurandoM >=0 && FprocurandoF >=0 && MprocurandoM >=0)
        {
            entradascorretas = true;
        }
    
    } while (entradascorretas == false);

    //Soma das entradas dadas para fazer as conversoes
    int total = MprocurandoF + FprocurandoM + FprocurandoF + MprocurandoM;

    //Conversao de cada valor de entrada para as porcentagens devidas para ser usado nos graficos
    MprocurandoF = (MprocurandoF/total)*80;
    FprocurandoM = (FprocurandoM/total)*80;
    FprocurandoF = (FprocurandoF/total)*80;
    MprocurandoM = (MprocurandoM/total)*80;

    //Conversao dos valores em ponto flutuante para inteiros
    int conversorMprocurandoF = (int) (MprocurandoF);
    int conversorFprocurandoM = (int) (FprocurandoM);
    int conversorFprocurandoF = (int) (FprocurandoF);
    int conversorMprocurandoM = (int) (MprocurandoM);

    //Mensagens que indicam a interpretacao de cada grafico. Cada grafico e feito por um loop que imprime uma quantidade de # para cada grafico de acordo com as proporcoes calculadas.
    printf("M procurando F:\n");
    for(int i = 0; i < conversorMprocurandoF ; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("F procurando M:\n");
    for(int i = 0; i < conversorFprocurandoM ; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("F procurando F:\n");
    for(int i = 0; i < conversorFprocurandoF ; i++)
    {
        printf("#");
    }
    printf("\n");

    printf("M procurando M:\n");
    for(int i = 0; i < conversorMprocurandoM ; i++)
    {
        printf("#");
    }
    printf("\n");


    return 0;
}
