#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#include "estruturas.h"
#include "funcoes.h"
#include "visuais.h"

jogador j[4];
partidas *par;

//FUNÇÕES UTILITÁRIAS

void limpatela() {
    system("cls");
}

void pausatela() {
    system("pause");
    printf("\n\n");
}

char lerTecla() {
    return getch();
}

void esconder_cursor() {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursor;
    GetConsoleCursorInfo(console, &cursor);
    cursor.bVisible = FALSE;
    SetConsoleCursorInfo(console, &cursor);
}

void limpar_entrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF){

    }
}

void listar_jogadores(const jogador j[4]){
    printf ("Jogadores ativos: \n\n");
    for (int i = 0; i<4; i++){
        printf("%s\n", j[i].nome_jogador);
    }
}

int ler_nome(char nome[], size_t tamanho) {
    if (fgets(nome, tamanho, stdin) == NULL) {
        return 0;
    }

    size_t len = strlen(nome);

    if (len > 0 && nome[len - 1] == '\n') {
        nome[len - 1] = '\0';
        return 1;
    }

    int c = getchar();

    if (c == '\n' || c == EOF) {
        return 1;
    }

    limpar_entrada();
    return -1;
}


//IMPLEMENTAÇÃO INICIALIZAÇÃO DE ESTRUTURAS

void inicializar_jogador(jogador j[4]) {
    int quantidade_jogadores = 0;
    int reiniciar;

    do {
        limpatela();
        reiniciar = 0;
        quantidade_jogadores = 0;

        for (int i = 0; i < 4; i++) {
            j[i] = (jogador){0};
        }

        for (int i = 0; i < 4; i++) {
            desenharMenu();
            listar_jogadores(j);


            printf("\nDigite o nome do jogador %d ou aperte ENTER para seguir: ", i + 1);

            int resultado = ler_nome(j[i].nome_jogador, sizeof(j[i].nome_jogador));

            if (j[i].nome_jogador[0] == '\0') {
                if (i == 0) {
                    printf("O primeiro jogador é obrigatório! Aperte qualquer tecla para retornar\n");
                    lerTecla();
                    limpatela();
                    i--;
                    continue;
                }

                break;
            }

            if (resultado == -1) {
                printf("Nome muito longo! Tente novamente.\n");
                memset(j[i].nome_jogador, 0, sizeof(j[i].nome_jogador));
                lerTecla();
                limpatela();
                i--;
                continue;
            }

            j[i].id_jogador = i + 1;
            j[i].dinheiro_jogador = 1000;

            quantidade_jogadores++;
            limpatela();
        }
        limpatela();

        while(1){
            desenharMenu();
            listar_jogadores(j);
            printf("\nAperte ENTER para confirmar a lista de jogadores\n");
            printf("Aperte ESC para recomeçar a lista\n");

            char tecla = lerTecla();

            if (tecla == 27) {
                reiniciar = 1;
                break;

            } else if (tecla == 13) {
                break;

            } else {
                printf("\nTecla inválida! Aperte qualquer tecla para retornar");
                lerTecla();
                limpatela();
            }
        }


        limpatela();

    } while (reiniciar);
}



//IMPLEMENTAÇÃO FUNÇÕES DE MENU

char iniciar_jogo(){
    char tecla;
    desenharMenu();
    printf("Aperte qualquer tecla para iniciar o jogo\n\n");
    printf("\nAperte ESC para sair");
    tecla = lerTecla();
    if (tecla == 27){
        return 27;
    }
    else {
        limpatela();
        return 0;
    }
}




