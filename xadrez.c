#include <stdio.h>

//Função recursiva que simula o movimento da torre
void rectorre (int numero) 
{
    if (numero <= 5)
    {
        printf("DIREITA!\n");

        rectorre(numero + 1);

    }
     
}

//Função recursiva que simula o movimento do bispo
void moverBispo(int passosRestantes) {
    if (passosRestantes == 0)
        return;

    //Loop externo = movimento vertical
    for (int b = 0; b < 1; b++) {
        printf("CIMA!\n");

        //Loop interno = movimento horizontal
        for (int b2 = 0; b2 < 1; b2++) {
            printf("DIREITA!\n");
        }

        printf("\n"); //Linha pulada com o intuito de melhorar a saída de dados
    }

    //Chamada recursiva para repetir o movimento
    moverBispo(passosRestantes - 1);
}


//Função recursiva que simula o movimento da rainha
void recrainha (int numero) 
{
    if (numero <= 8)
    {
        printf("ESQUERDA!\n");

        recrainha(numero + 1);

    }
     
}


int main() {
    int t = 1;
    int r = 1;

    printf("\n****SIMULANDO MOVIMENTOS DE PEÇAS DE XADREZ****\n");

    printf("\n"); //Linha pulada com o objetivo de uma maior organização na saída do programa

    //Simulando em qual direção a torre irá seguir no tabuleiro
    printf("A movimentação da torre será a seguinte: \n");
    rectorre(t); //Retorno da recursiva para  simular o movimento da torre
 
    printf("\n"); //Linha pulada com o objetivo de uma maior organização na saída do programa

    //Simulando em qual direção o bispo irá seguir no tabuleiro
    printf("A movimentação do bispo será a seguinte: \n");
    moverBispo(5); //Retorno da recursiva para  simular o movimento do bispo

    printf("\n"); //Linha pulada com o objetivo de uma maior organização na saída do programa
    
    //Simulando em qual direção a rainha irá seguir no tabuleiro
    printf("A movimentação da rainha será a seguinte: \n");
    recrainha(r);//Retorno da recursiva para  simular o movimento da torre

    printf("\n"); //Linha pulada com o objetivo de uma maior organização na saída do programa

     //Simulando o movimento do cavalo no tabuleiro de xadrez

    printf("A movimentação do cavalo será a seguinte: \n");
    for(int c = 1; c <= 2; c++){

        printf("CIMA!\n"); //Indicando o movimento inicial do cavalo no tabuleiro
        
        if (c == 2) { //Estrutura de decisão usada para indicar a finalização do movimento vertical
            
            int c2 =  1; //Variável usada para simular o movimento do cavalo na direção horizontal
            while (c2 <= 1) {

                printf("DIREITA!\n"); //Indicando o movimento final do cavalo no tabuleiro
                c2++;

            }


        }


    }
    
    printf("\n"); //Linha pulada com o objetivo de uma maior organização na saída do programa

    return 0;
}