#include <stdio.h>

int main() {
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.#include <stdio.h>

    int pecas, direcao, escolha;
    int bispo, torre, rainha, cavalo, rei, peao; //PECAS
    int casaBispo1, casaBispo2, casaTorre1, casaTorre2, casaRainha1, casaRainha2, casaCavalo1, casaCavalo2, casaRei1, casaRei2, casaPeao1, casaPeao2;
    int direcaoBispo1, direcaoBispo2, direcaoTorre1, direcaoTorre2, direcaoRainha1, direcaoRainha2, direcaoCavalo1, direcaoCavalo2, direcaoRei1, direcaoRei2, direcaoPeao1, direcaoPeao2;
    char Direita, Esquerda, Cima, Baixo, Direitacima, esqueraCima, DireitaBaixo, EsquerdaBaixo;
   
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
        printf("Escolha a peça que deseja movimentar\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("5 - Rei\n");
        printf("6 - Peão\n");
        printf("Digite a opção desejada\n");
        scanf("%d", &pecas);
    //----------------------------------------------------------------------------------------------------
    switch (pecas) {
        case 1: //Bispo
            printf(" ---------- Bispo selecionado ----------\n");
                    printf("Digite a direção que deseja movimentar\n");
                    printf("1 - Direita e para Cima\n");
                    printf("2 - Direita e para Baixo\n");
                    printf("3 - Esquerda e para Cima\n");
                    printf("4 - Esquerda e para Baixo\n");
                    while(getchar() != '\n');
                    printf("Digite a opção desejada\n");
                    scanf("%d", &direcaoBispo1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaBispo1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaBispo1; i++) {
                        printf("%s\n", direcaoBispo1 == 1 ? "DIREITA E PARA CIMA" : 
                                        direcaoBispo1 == 2 ? "DIREITA E PARA BAIXO" :
                                        direcaoBispo1 == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
                    }
                    break;
    //----------------------------------------------------------------------------------------------------
        case 2: //Torre
            printf(" ---------- Torre selecionada ----------\n");
            printf("O movimento sera na horizontal, vertical ou diagonal?\n");
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
                    scanf("%d", &direcaoTorre1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaTorre1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaTorre1; i++) {
                        printf("%s\n", direcaoTorre1 == 1 ? "DIREITA" : "ESQUERDA");
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
                    scanf("%d", &direcaoTorre2);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaTorre2);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaTorre2; i++) {
                        printf("%s\n", direcaoTorre2 == 1 ? "CIMA" : "BAIXO");
                    }
                    break;
                }
                else {
                    printf("Opção inválida\n");
                    break;
                }
        //----------------------------------------------------------------------------------------------------
        case 3: //Rainha
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
                    scanf("%d", &direcaoRainha1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaRainha1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaRainha1; i++) {
                        printf("%s\n", direcaoRainha1 == 1 ? "DIREITA" : "ESQUERDA");
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
                    scanf("%d", &direcaoRainha2);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaRainha2);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaRainha2; i++) {
                        printf("%s\n", direcaoRainha2 == 1 ? "CIMA" : "BAIXO");
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
                    scanf("%d", &direcaoRainha1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaRainha1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaRainha1; i++) {
                        printf("%s\n", direcaoRainha1 == 1 ? "DIREITA E PARA CIMA" : 
                                        direcaoRainha1 == 2 ? "DIREITA E PARA BAIXO" :
                                        direcaoRainha1 == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
                    }
                    break;
                }
                else {
                    printf("Opção inválida\n");
                    break;
                }
        //----------------------------------------------------------------------------------------------------
        case 4: //Cavalo
            printf(" ---------- Cavalo selecionado ----------\n");
            printf("O movimento sera na horizontal, vertical ou diagonal?\n");
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
                    scanf("%d", &direcaoCavalo1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaCavalo1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaCavalo1; i++) {
                        printf("%s\n", direcaoCavalo1 == 1 ? "DIREITA" : "ESQUERDA");
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
                    scanf("%d", &direcaoCavalo2);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaCavalo2);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaCavalo2; i++) {
                        printf("%s\n", direcaoCavalo2 == 1 ? "CIMA" : "BAIXO");
                    }
                    break;
                }
                else {
                    printf("Opção inválida\n");
                    break;
                }
        //----------------------------------------------------------------------------------------------------
        case 5: //Rei
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
                    scanf("%d", &direcaoRei1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaRei1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaRei1; i++) {
                        printf("%s\n", direcaoRei1 == 1 ? "DIREITA" : "ESQUERDA");
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
                    scanf("%d", &direcaoRei2);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaRei2);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaRei2; i++) {
                        printf("%s\n", direcaoRei2 == 1 ? "CIMA" : "BAIXO");
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
                    scanf("%d", &direcaoRei1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaRei1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaRei1; i++) {
                        printf("%s\n", direcaoRei1 == 1 ? "DIREITA E PARA CIMA" : 
                                        direcaoRei1 == 2 ? "DIREITA E PARA BAIXO" :
                                        direcaoRei1 == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
                    }
                    break;
                }
                else {
                    printf("Opção inválida\n");
                    break;
                }
                
        //----------------------------------------------------------------------------------------------------
        case 6: //Peão
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
                    scanf("%d", &direcaoPeao1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaPeao1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaPeao1; i++) {
                        printf("%s\n", direcaoPeao1 == 1 ? "DIREITA" : "ESQUERDA");
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
                    scanf("%d", &direcaoPeao2);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaPeao2);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaPeao2; i++) {
                        printf("%s\n", direcaoPeao2 == 1 ? "CIMA" : "BAIXO");
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
                    scanf("%d", &direcaoPeao1);
                    printf("Digite o numero de casas que deseja movimentar\n");
                    scanf("%d", &casaPeao1);
                    printf(" ---------- MOVIMENTO ----------\n");
                        for (int i = 0; i < casaPeao1; i++) {
                        printf("%s\n", direcaoPeao1 == 1 ? "DIREITA E PARA CIMA" : 
                                        direcaoPeao1 == 2 ? "DIREITA E PARA BAIXO" :
                                        direcaoPeao1 == 3 ? "ESQUERDA E PARA CIMA" : "ESQUERDA E PARA BAIXO");
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

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops