#include <stdio.h>

void moverBispoRec(int passo, int casas, int dir) { //int 
    if (passo >= casas) return;
    printf("%s\n", dir == 1 ? "DIREITA E PARA CIMA" : 
                  dir == 2 ? "DIREITA E PARA BAIXO" :
                  dir == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
    moverBispoRec(passo + 1, casas, dir);
}
//----------------------------------------------------------------------------------------------------
void moverTorreRec(int passo, int casas, int dir, int tipo) {
    if (passo >= casas) return;
    printf("%s\n", tipo == 1 ? (dir == 1 ? "DIREITA" : "ESQUERDA") : 
                              (dir == 1 ? "CIMA" : "BAIXO"));
    moverTorreRec(passo + 1, casas, dir, tipo);
}
//----------------------------------------------------------------------------------------------------
void moverRainhaRec(int passo, int casas, int dir, int tipo) {
    if (passo >= casas) return;
    if (tipo == 3) {
        printf("%s\n", dir == 1 ? "DIREITA E PARA CIMA" : 
                      dir == 2 ? "DIREITA E PARA BAIXO" :
                      dir == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
    } else {
        printf("%s\n", tipo == 1 ? (dir == 1 ? "DIREITA" : "ESQUERDA") : 
                                  (dir == 1 ? "CIMA" : "BAIXO"));
    }
    moverRainhaRec(passo + 1, casas, dir, tipo);
}
//----------------------------------------------------------------------------------------------------
int main() {
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.#include <stdio.h>


    int direcao, escolha, movimento, movimento2, casas;
    char pecas;

    //----------------------------------------------------------------------------------------------------
    printf("Bem vindo ao jogo de xadrez\n");
    //----------------------------------------------------------------------------------------------------
    printf(" ---------- MENU ----------\n");
    printf("1 - INICIAR\n");
    printf("2 - SAIR\n");
    printf("Digite a opção desejada\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf(" ---------- INICIANTO O JOGO ----------\n");
        }
        else {
            printf("Saindo do jogo\n");
            return 0;
            }
    //----------------------------------------------------------------------------------------------------
        printf(" ---------- ESCOLHA A PEÇA ----------\n");
        printf("Escolha a peça que deseja movimentar\n");
        printf("B - Bispo\n");
        printf("T - Torre\n");
        printf("R - Rainha\n");
        printf("C - Cavalo\n");
        printf("K - Rei\n");
        printf("P - Peão\n");
        printf("Digite a opção desejada\n");
        scanf("%s", &pecas);
    //----------------------------------------------------------------------------------------------------
    switch (pecas) {
        case 'b':
        case 'B': //Bispo
            printf(" ---------- Bispo selecionado ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita e para Cima\n");
                    printf("2 - Direita e para Baixo\n");
                    printf("3 - Esquerda e para Cima\n");
                    printf("4 - Esquerda e para Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        moverBispoRec(0, casas, movimento);
                        break;

                
                        /*for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA E PARA CIMA" : 
                                        movimento == 2 ? "DIREITA E PARA BAIXO" :
                                        movimento == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
                        }
                        break;*/
    //----------------------------------------------------------------------------------------------------
        case 't':
        case 'T': //Torre
            printf(" ---------- Torre selecionada ----------\n");
            printf("O movimento sera na horizontal, vertical?\n");
            printf("1 - Horizontal\n");
            printf("2 - Vertical\n");
            printf("Digite a opção desejada\n");
            scanf("%d", &direcao);
                if (direcao == 1) {
                    printf(" ---------- Movimento na horizontal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita\n");   
                    printf("2 - Esquerda\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);


                    printf(" ---------- MOVIMENTO ----------\n");
                        moverTorreRec(0, casas, movimento, 1); 
                        break;  
                    }
                    /*for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA" : "ESQUERDA");
                    }  
                    break; */           
                else if (direcao == 2) {
                    printf(" ---------- Movimento na vertical ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Cima\n");
                    printf("2 - Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        moverTorreRec(0, casas, movimento, 1); 
                        break;  
                    }
                    /*for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "CIMA" : "BAIXO");
                    }
                    break;*/
                else {
                    printf("Opção inválida\n");
                    break;
                }
        //----------------------------------------------------------------------------------------------------
            case 'r':
            case 'R': //Rainha
            printf(" ---------- Rainha selecionada ----------\n");
            printf("O movimento sera na horizontal, vertical ou diagonal?\n");
            printf("1 - Horizontal\n");
            printf("2 - Vertical\n");
            printf("3 - Diagonal\n"); 
            printf("Digite a opção desejada\n");
            scanf("%d", &direcao);
                if (direcao == 1) {
                    printf(" ---------- Movimento na horizontal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita\n");   
                    printf("2 - Esquerda\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        moverRainhaRec(0, casas, movimento, direcao);
                        break;
                        } 
                        /*for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA" : "ESQUERDA");
                        }   
                        break;          
                        }*/  
                else if (direcao == 2) {
                    printf(" ---------- Movimento na vertical ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Cima\n");
                    printf("2 - Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        moverRainhaRec(0, casas, movimento, direcao);
                        break;
                        } 
                        /*for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "CIMA" : "BAIXO");
                        }
                        break;
                }*/
                else if (direcao == 3) {
                    printf(" ---------- Movimento na diagonal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita e para Cima\n");
                    printf("2 - Direita e para Baixo\n");
                    printf("3 - Esquerda e para Cima\n");
                    printf("4 - Esquerda e para Baixo\n");
                    while(getchar() != '\n');   
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        moverRainhaRec(0, casas, movimento, direcao);
                        break;
                        } 
                        /*for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA E PARA CIMA" : 
                                        movimento == 2 ? "DIREITA E PARA BAIXO" :
                                        movimento == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
                        }
                        break;
                }*/
                else {
                    printf("Opção inválida\n");
                    break;
                    }
        //----------------------------------------------------------------------------------------------------
            case 'c':        
            case 'C': //Cavalo
            printf(" ---------- Cavalo selecionado ----------\n");
            printf("O movimento sera na horizontal, vertical?\n");
            printf("1 - Horizontal\n");
            printf("2 - Vertical\n");
            printf("Digite a opção desejada\n");
            scanf("%d", &direcao);
                if (direcao == 1) {
                    printf(" ---------- Movimento na horizontal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita\n");   
                    printf("2 - Esquerda\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite a segunda direção que deseja movimentar\n");
                    printf("1 - Cima\n");
                    printf("2 - Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento2);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < 2; i++) { // primeiro movimento do L andara 2 casas (por isso i < 2)
                        printf("%s\n", movimento == 1 ? "DIREITA" : "ESQUERDA");
                        } 
                            int i = 0;
                            while (i < 1) { // segundo movimento do L andara 1 casa (por isso i < 1)
                            printf("%s\n", movimento2 == 1 ? "CIMA" : "BAIXO");
                            i++;
                            }
                            break;            
                }
                else if (direcao == 2) {
                    printf(" ---------- Movimento na vertical ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Cima\n");
                    printf("2 - Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite a segunda direção que deseja movimentar\n");
                    printf("1 - Direita\n");
                    printf("2 - Esquerda\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento2);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < 2 ; i++) {
                        printf("%s\n", movimento == 1 ? "CIMA" : "BAIXO");
                        } 
                            int i = 0;
                            while (i < 1) {
                            printf("%s\n", movimento2 == 1 ? "DIREITA" : "ESQUERDA");
                            i++;
                            }
                            break;
                }
                else {
                    printf("Opção inválida\n");
                    break;
                }
        //----------------------------------------------------------------------------------------------------
            case 'k':
            case 'K': //Rei
            printf(" ---------- Rei selecionado ----------\n");
            printf("O movimento sera na horizontal, vertical ou diagonal?\n");
            printf("1 - Horizontal\n");
            printf("2 - Vertical\n");
            printf("3 - Diagonal\n"); 
            printf("Digite a opção desejada\n");
            scanf("%d", &direcao);
                if (direcao == 1) {
                    printf(" ---------- Movimento na horizontal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita\n");   
                    printf("2 - Esquerda\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);
                    
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA" : "ESQUERDA");
                        } 
                        break;              
                }
                else if (direcao == 2) {
                    printf(" ---------- Movimento na vertical ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Cima\n");
                    printf("2 - Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "CIMA" : "BAIXO");
                        }
                        break;
                }
                else if (direcao == 3) {
                    printf(" ---------- Movimento na diagonal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita e para Cima\n");
                    printf("2 - Direita e para Baixo\n");
                    printf("3 - Esquerda e para Cima\n");
                    printf("4 - Esquerda e para Baixo\n"); 
                    while
                    (getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA E PARA CIMA" : 
                                        movimento == 2 ? "DIREITA E PARA BAIXO" :
                                        movimento == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
                    }
                    break;
                }
                else {
                    printf("Opção inválida\n");
                    break;
                }
                
        //----------------------------------------------------------------------------------------------------
            case 'p':
            case 'P': //Peão
            printf(" ---------- Peão selecionado ----------\n");
            printf("O movimento sera na horizontal, vertical ou diagonal?\n");
            printf("1 - Horizontal\n");
            printf("2 - Vertical\n");
            printf("3 - Diagonal\n"); 
            printf("Digite a opção desejada\n");
            scanf("%d", &direcao);
                if (direcao == 1) {
                    printf(" ---------- Movimento na horizontal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita\n");   
                    printf("2 - Esquerda\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA" : "ESQUERDA");
                        }     
                        break;          
                }
                else if (direcao == 2) {
                    printf(" ---------- Movimento na vertical ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Cima\n");
                    printf("2 - Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "CIMA" : "BAIXO");
                        }
                        break;
                }
                else if (direcao == 3) {
                    printf(" ---------- Movimento na diagonal ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita e para Cima\n");
                    printf("2 - Direita e para Baixo\n");
                    printf("3 - Esquerda e para Cima\n");
                    printf("4 - Esquerda e para Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &movimento);

                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casas);

                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casas; i++) {
                        printf("%s\n", movimento == 1 ? "DIREITA E PARA CIMA" : 
                                        movimento == 2 ? "DIREITA E PARA BAIXO" :
                                        movimento == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
                        }
                        break;
                }
                else {
                    printf("Opção inválida\n");
                }
                break;
            printf("Opção inválida\n");
            break;
    }    

    return 0;
}
//----------------------------------------------------------------------------------------------------

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
