#include <stdio.h>
#include <conio.h>


/*
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.



Tema 4 - Movimentação de Peças de Xadrez

Desafio nivel MESTRE

Modificações para o nivel Mestre em relacao ao nível Aventureiro

- Criacao de Loops Recursivos subistituindo os loops originais da Torre, Bisco e Rainha.
- Criacao de Loops Aninhados para o Cavalo


*/



        // Algoritimo de movimentacao da TORRE (Loop recursivo)

        void movimentoTorreBranco(int qnt_casas_T_B) {
        if (qnt_casas_T_B > 0)
        {
        movimentoTorreBranco(qnt_casas_T_B - 1); 
        printf("Direira %d casas\n", qnt_casas_T_B); 
        }
        
        }
        //-----------------------------------------------------

        // Algoritimo de movimentacao do BISPO (Loop recursivo)

        void movimentoBispoBranco(int qnt_casas_B_B) {
        if (qnt_casas_B_B > 0)
        {
        movimentoBispoBranco(qnt_casas_B_B - 1); 
        printf("Diagonal direira para cima %d casas\n", qnt_casas_B_B); 
        }
        
        }
        //-----------------------------------------------------

        // Algoritimo de movimentacao da RAINHA (Loop recursivo)

        void movimentoRainhaBranco(int qnt_casas_R_B) {
        if (qnt_casas_R_B > 0)
        {
        movimentoRainhaBranco(qnt_casas_R_B - 1); 
        printf("Esquerda %d casas\n", qnt_casas_R_B); 
        }
        
        }
        //-----------------------------------------------------



int main (){


        // Variaveis criadas para utlizacao no desafio Nivel Mestre 

        int movi_peca;
        int casas_torre_branco = 5; // Vairavel da quantidade fixa de movimentos da Torre Branca
        int casas_bispo_branco = 5; // Vairavel da quantidade fixa de movimentos do Bispo Branco
        int casas_rainha_branco = 8; // Vairavel da quantidade fixa de movimentos da Rainha Branco
        int completo_movi_cavalo_branco = 1; // Vairavel da quantidade fixa de movimentos do Cavalo Branco


        system("cls");

        //Cabecalho de painel e dicas das movimentacoes

        printf("#----------------------------------------------#\n");
        printf("# SIMULADOR DE MOVIMENTACAO DE PECAS DE XADREZ #\n");
        printf("#----------------------------------------------#\n");
        printf("\n");
        printf("Dica: Torre: Move-se em linha reta horizontalmente ou verticalmente.\n");
        printf("Dica: Bispo: Move-se na diagonal.\n");
        printf("Dica: Rainha: Move-se em todas as direcoes.\n");
        printf("Dica: Cavalo: Move-se em L horizontalmente ou verticalmente.\n");
        printf("\n");
        
        
        
        // Entrada de dados para movimentacao da TORRE BRANCA
        // Usuario escreve a quantidade de casas em que a Torre vai se movimentar, em seguida, escolhe a direção
        

        do // Utilizacao do Loop no MENU DE SELECAO para retornar se escolha for diferente do existente 
        {

            printf("Escolha abaixo qual peca ira se movimentar:\n"); //Menu para selecao da peca que ira se movimentar
            printf("1. Torre branco: \n");
            printf("2. Bispo branco: \n");
            printf("3. Rainha branco: \n");
            printf("4. Cavalo branco: \n");
            printf("Escreva: ");
            scanf(" %d", &movi_peca);
            printf("\n");

        } while (movi_peca != 1 && movi_peca != 2 && movi_peca != 3 && movi_peca != 4); // Fechamento do loop do MENU DE SELECAO




        switch (movi_peca) // Abertura do SWITCH para escolha da peca que ira se movimentar
        {
        case 1: // Direcao da movimentacao da TORRE BRANCA
            printf("Direcao da torre branca:\n");
            movimentoTorreBranco(casas_torre_branco);
            break;
        
        case 2: // Direcao da movimentacao do BISPO BRANCO
            printf("Direcao do bispo branco:\n");
            movimentoBispoBranco(casas_bispo_branco);
            break;
        
        case 3: // Direcao da movimentacao da RAINHA BRANCA
            printf("Direcao da rainha branca:\n");
            movimentoRainhaBranca(casas_rainha_branco);
            break;
        

        case 4: // Direcao da movimentacao do CAVALO BRANCO
            printf("Direcao do cavalo branco:\n");
   
                while (completo_movi_cavalo_branco--)
                {
                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                    {
                    printf("Cima\n"); // Imprime a movimentação do Cavalo Branco para cima duas vezes.
                    }
                    printf("Direita\n"); // Imprime a movimentação do Cavalo Branco para a direita uma vez.

                }
            break;

        default:
            break;
        } // Fechamento do SWITCH para escolha da peca que ira se movimentar

        return 0;
                         
}
