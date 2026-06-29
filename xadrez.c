#include <stdio.h>
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

Desafio nivel AVENTUREIRO

Modificações do nivel Novato parao nível Aventureiro

- Criado a movimentação do Cavalo utilizando loops aninhados.


*/



int main (){


        int torre_branco, bispo_branco, rainha_branco; // Variaveis para designar o inicio da movimentacao das pecas
        int movi_qtdade_casas; // Variavel para o usuario informar a quantidade de vezes a peca vai se mover
        int direcao_torre_branco, direcao_bispo_branco, direcao_rainha_branco; // Variaveis para determinar a direcao das pecas
        int cavalo_branco, primeiro_movi_cavalo_branco, segundo_movi_cavalo_branco, completo_movi_cavalo_branco = 1; // Variaveis de movimentacao do Cavalo Branco

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

                // Calculo da movimentacao da TORRE BRANCA usando o FOR

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
                // Usuario escreve a quantidade de casas em que a Bispo vai se movimentar, em seguida, escolhe a direção
        
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
                // Usuario escreve a quantidade de casas em que a Rainha vai se movimentar, em seguida, escolhe a direção

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


                // Entrada de dados para movimentacao do CAVALO BRANCO
                // Como o Cavalo se movimenta em L, o usuário escolhe para qual direção a peça vai se movimentar primeiro e depois escolhe a segunda direção.

            printf("\n");
            printf("\n");
            printf("Escolha o movimento em que a peca abaixo ira realizar.\n");
                printf("Cavalo branco: ");
                    printf("\n");
                        printf("Escolha o primeiro movimento abaixo:\n");
                            printf("1. Para cima\n");
                                printf("2. Para baixo\n");
                                    printf("3. Lateral direita\n");
                                        printf("4. Lateral esquerda\n");
                                            printf("Escreva: ");
                                            scanf(" %d", &primeiro_movi_cavalo_branco);


                    // Calculo da movimentacao da CAVALO BRANCO usando o WHILE e FOR (Loops aninhados)

                
                
                    if (primeiro_movi_cavalo_branco == 1) //------------------- Algoritimo de movimento do cavalo para CIMA - Esquerda/Direira
                    {
                        printf("Movimento para cima.\n");
                        printf("\n");
                        printf("Escolha o segundo movimento.\n");
                        printf("1. Direita\n");
                        printf("2. Esquerda.\n");
                        printf("Escreva: ");
                        scanf("%d", &segundo_movi_cavalo_branco);
                        printf("\n");

                            if (segundo_movi_cavalo_branco == 1)
                            {
                                while (completo_movi_cavalo_branco--)
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Cima\n");
                                    }
                                        printf("Direita\n");
                                }

                            } else if (segundo_movi_cavalo_branco == 2)
                            {
                                while (completo_movi_cavalo_branco--)
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Cima\n");
                                    }
                                        printf("Esquerda\n");
                                }

                            } 

                    } else if (primeiro_movi_cavalo_branco == 2) //------------------- Algoritimo de movimento do cavalo para BAIXO - Esquerda/Direira

                    {
                        printf("Movimento para baixo.\n");
                        printf("\n");
                        printf("Escolha o segundo movimento.\n");
                        printf("1. Direita\n");
                        printf("2. Esquerda.\n");
                        printf("Escreva: ");
                        scanf("%d", &segundo_movi_cavalo_branco);
                        printf("\n");

                            if (segundo_movi_cavalo_branco == 1)
                            {
                                while (completo_movi_cavalo_branco--)
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Baixo\n");
                                    }
                                        printf("Direita\n");
                                }

                            } else if (segundo_movi_cavalo_branco == 2)
                            {
                                while (completo_movi_cavalo_branco--) 
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Baixo\n");
                                    }
                                        printf("Esquerda\n");
                                }

                            }
                    } else if (primeiro_movi_cavalo_branco == 3) //------------------- Algoritimo de movimento do cavalo para LATERAL DIREITA - Cima/Baixo

                    {
                        printf("Movimento para Lateral direita.\n");
                        printf("\n");
                        printf("Escolha o segundo movimento.\n");
                        printf("1. Cima\n");
                        printf("2. Baixo.\n");
                        printf("Escreva: ");
                        scanf("%d", &segundo_movi_cavalo_branco);
                        printf("\n");

                            if (segundo_movi_cavalo_branco == 1)
                            {
                                while (completo_movi_cavalo_branco--)
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Lateral direita\n");
                                    }
                                        printf("Cima\n");
                                }

                            } else if (segundo_movi_cavalo_branco == 2)
                            {
                                while (completo_movi_cavalo_branco--)
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Lateral direita\n");
                                    }
                                        printf("Baixo\n");
                                }

                            }
                    } else if (primeiro_movi_cavalo_branco == 4) //------------------- Algoritimo de movimento do cavalo para LATERAL ESQUERDA - Cima/Baixo

                    {
                        printf("Movimento para Lateral esquerda.\n");
                        printf("\n");
                        printf("Escolha o segundo movimento.\n");
                        printf("1. Cima\n");
                        printf("2. Baixo.\n");
                        printf("Escreva: ");
                        scanf("%d", &segundo_movi_cavalo_branco);
                        printf("\n");

                            if (segundo_movi_cavalo_branco == 1)
                            {
                                while (completo_movi_cavalo_branco--)
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Lateral esquerda\n");
                                    }
                                        printf("Cima\n");
                                }

                            } else if (segundo_movi_cavalo_branco == 2)
                            {
                                while (completo_movi_cavalo_branco--)
                                {
                                    for (int i = 0; i < 2; i++) // Criado variável i somente para movimentação do Cavalo Branco.
                                    {
                                        printf("Lateral esquerda\n");
                                    }
                                        printf("Baixo\n");
                                }

                            }
                    }
                    
}
