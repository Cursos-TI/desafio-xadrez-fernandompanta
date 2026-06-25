#include <stdio.h>

/*

Tema 4 - Movimentação de Peças de Xadrez

Desafio nivel novato

Simular a mocimentação de 03 peças: Torre, Bispo e Rainha.

Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.


*/



int main (){


        int torre_branco, bispo_branco, rainha_branco; // Variaveis para designar o inicio da movimentacao das pecas
        int movi_qtdade_casas; // Variavel para o usuario informar a quantidade de vezes a peca vai se mover
        int direcao_torre_branco, direcao_bispo_branco, direcao_rainha_branco; // Variaveis para determinar a direcao das pecas

        system("cls");

        //Cabecalho de painel e dicas das movimentacoes

        printf("#----------------------------------------------#\n");
        printf("# SIMULADOR DE MOVIMENTACAO DE PECAS DE XADREZ #\n");
        printf("#----------------------------------------------#\n");
        printf("\n");
        printf("Dica: Torre: Move-se em linha reta horizontalmente ou verticalmente.\n");
        printf("Dica: Bispo: Move-se na diagonal.\n");
        printf("Dica: Rainha: Move-se em todas as direcoes.\n");
        printf("\n");
        
        
        
        // Entrada de dados para movimentacao da Torre Branca
        
        printf("Escreva a quantidade de casas em que a peca\nabaixo ira movimentar.\n");
            printf("Torre branco: ");
            scanf(" %d", &movi_qtdade_casas);
                printf("\n");
                    printf("Escolha a direcao abaixo:\n");
                        printf("1. Horizontal Direita\n");
                            printf("2. Horizontal Esquerda\n");
                                printf("3. Vertical para cima\n");
                                    printf("4. Vertical para baixo\n");
                                        printf("Escreva:");
                                        scanf(" %d", &direcao_torre_branco);
                                            printf("\n");
                                                printf("\n");

                // Calculo da movimentacao da Torre usando o FOR

                for (torre_branco = 1; torre_branco < (movi_qtdade_casas + 1); torre_branco++)
                {
                    if (direcao_torre_branco == 1)
                    {
                        printf("Torre move-se para Horizontal Direita %d casas\n", torre_branco);
                        
                    } else if (direcao_torre_branco == 2)
                    {
                        printf("Torre move-se para Horizontal Esquerda %d casas\n", torre_branco);
                    
                    } else if (direcao_torre_branco == 3)
                    {
                        printf("Torre move-se para Vertical Direita %d casas\n", torre_branco);
                    
                    } else if (direcao_torre_branco == 4)
                    {
                        printf("Torre move-se para Vertical Esquerda %d casas\n", torre_branco);

                    } else {
                        printf("Opcao invalida!\n");
                        printf("\n");
                            
                    }
                }



                // Entrada de dados para movimentacao do BISPO BRANCO
        
        printf("\n");
        printf("\n");
        printf("Escreva a quantidade de casas em que a peca\nabaixo ira movimentar.\n");
            printf("Bispo branco: ");
            scanf(" %d", &movi_qtdade_casas);
                printf("\n");
                    printf("Escolha a direcao abaixo:\n");
                        printf("1. Diagonal Direita para cima\n");
                            printf("2. Diagonal Direita para baixo\n");
                                printf("3. Diagonal Esquerda para cima\n");
                                    printf("4. Diagonal Esqueda para baixo\n");
                                        printf("Escreva:");
                                        scanf(" %d", &direcao_bispo_branco);
                                            printf("\n");
                                                printf("\n");

                // Calculo da movimentacao da BISPO BRANCO usando o FOR

                for (bispo_branco = 1; bispo_branco < (movi_qtdade_casas + 1); bispo_branco++)
                {
                    if (direcao_bispo_branco == 1)
                    {
                        printf("Bispo move-se para Diagonal Direita para cima %d casas\n", bispo_branco);
                        
                    } else if (direcao_bispo_branco == 2)
                    {
                        printf("Bispo move-se para Diagonal Direita para baixo %d casas\n", bispo_branco);
                    
                    } else if (direcao_bispo_branco == 3)
                    {
                        printf("Bispo move-se para Diagonal Esquerda para cima %d casas\n", bispo_branco);
                    
                    } else if (direcao_bispo_branco == 4)
                    {
                        printf("Bispo move-se para Diagonal Esquerda para baixo %d casas\n", bispo_branco);

                    
                    } else {
                        printf("Opcao invalida!\n");
                        printf("\n");
                            
                    }
                }




                // Entrada de dados para movimentacao do RAINHA BRANCA

        printf("\n");
        printf("\n");
        printf("Escreva a quantidade de casas em que a peca\nabaixo ira movimentar.\n");
            printf("Rainha branco: ");
            scanf(" %d", &movi_qtdade_casas);
                printf("\n");
                    printf("Escolha a direcao abaixo:\n");
                        printf("1. Diagonal Direita para cima\n");
                            printf("2. Diagonal Direita para baixo\n");
                                printf("3. Diagonal Esquerda para cima\n");
                                    printf("4. Diagonal Esqueda para baixo\n");
                                        printf("5. Horizontal Direita\n");
                                            printf("6. Horizontal Esquerda\n");
                                                printf("7. Vertical para cima\n");
                                                    printf("8. Vertical para baixo\n");
                                                printf("Escreva:");
                                                scanf(" %d", &direcao_rainha_branco);
                                                printf("\n");
                                                printf("\n");

                    // Calculo da movimentacao da RAINHA BRANCA usando o FOR

                for (rainha_branco = 1; rainha_branco < (movi_qtdade_casas + 1); rainha_branco++)
                {
                    if (direcao_rainha_branco == 1)
                    {
                        printf("Rainha move-se para Diagonal Direita para cima %d casas\n", rainha_branco);
                        
                    } else if (direcao_rainha_branco == 2)
                    {
                        printf("Rainha move-se para Diagonal Direita para baixo %d casas\n", rainha_branco);
                    
                    } else if (direcao_rainha_branco == 3)
                    {
                        printf("Rainha move-se para Diagonal Esquerda para cima %d casas\n", rainha_branco);
                    
                    } else if (direcao_rainha_branco == 4)
                    {
                        printf("Rainha move-se para Diagonal Esquerda para baixo %d casas\n", rainha_branco);

                    } else if (direcao_rainha_branco == 5)
                    {
                        printf("Rainha move-se para Horizontal Direita %d casas\n", rainha_branco);
                        
                    } else if (direcao_rainha_branco == 6)
                    {
                        printf("Rainha move-se para Horizontal Esquerda %d casas\n", rainha_branco);
                    
                    } else if (direcao_rainha_branco == 7)
                    {
                        printf("Rainha move-se para Vertical para cima %d casas\n", rainha_branco);
                    
                    } else if (direcao_rainha_branco == 8)
                    {
                        printf("Rainha move-se para Vertical para baixo %d casas\n", rainha_branco);

                    
                    } else {
                        printf("Opcao invalida!\n");
                        printf("\n");

                    }
                }


}
