/* PSET1: "Greedy" do CC50
Feito por: Lucas Scommegna Lopes 
Data: 24/09/2020 */

#include <stdio.h>
#include <cc50.h>

int main (void)
{

    //Mensagem informando ao usuario sobre como deve ser o valor de entrada do programa//
    printf("Ola! Digite a quantidade de troco que voce deve, somente em numeros e, caso tenha alguma virgula, substitua por um ponto:\n");

    //Uma variavel inicializada com um valor padrao para ser usada no loop subsequente//
    float QuantidadeDeTroco = 1;

    //Loop que pede um valor de troco em ponto flutuante ao usuario e uma condicional para que nao sejam aceitos valores negativos e, caso seja digitado um valor negativo, e transmitida uma mensagem pedindo que seja inserido um novo valor//
    do
    {
        QuantidadeDeTroco = GetFloat();
    
        if(QuantidadeDeTroco < 0)
        {
            printf("Por favor, digite o valor novamente:\n");
        }
    
    } while (QuantidadeDeTroco <= 0);

    //Conversao do valor dado para um valor em centavos, conversao desse valor para inteiro e uma variavel auxiliar para contar quantas moedas serao dadas no troco//
    QuantidadeDeTroco = QuantidadeDeTroco * 100;
    int QuantidadeDeTrocoInteiro = (int) QuantidadeDeTroco;
    int QuantidadeDeMoedas = 0;

    // Loop para ir subtraindo os valores das moedas atraves de condicoes e que itera um na variavel auxiliar a cada subtracao ate que a quantidade de troco seja zerada//
    while (QuantidadeDeTrocoInteiro != 0)
    {
        if(QuantidadeDeTrocoInteiro >= 25)
        {
            QuantidadeDeTrocoInteiro = QuantidadeDeTrocoInteiro - 25;
            QuantidadeDeMoedas++;
        }
        else if(QuantidadeDeTrocoInteiro >= 10)
        {
            QuantidadeDeTrocoInteiro = QuantidadeDeTrocoInteiro - 10;
            QuantidadeDeMoedas++;
        }
        else if(QuantidadeDeTrocoInteiro >= 5)
        {
            QuantidadeDeTrocoInteiro = QuantidadeDeTrocoInteiro - 5;
            QuantidadeDeMoedas++;
        }
        else
        {
            QuantidadeDeTrocoInteiro = QuantidadeDeTrocoInteiro - 1;
            QuantidadeDeMoedas++;
        }
    }

    //Imprime na tela para o usuario a variavel auxiliar utilizada para contar a quantidade de moedas utilizadas para o troco//
    printf("%d" , QuantidadeDeMoedas);

    return 0;
}
