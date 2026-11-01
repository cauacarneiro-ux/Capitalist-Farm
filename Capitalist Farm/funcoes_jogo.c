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

void listar_jogadores(){
    printf ("Jogadores ativos: \n\n");
    for (int i = 0; i<5; i++){
        printf("%s\n", j[i].nome_jogador);
    }
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
            desenharMenu();
            listar_jogadores();

            j[i] = (jogador){0};

            printf("Digite o nome do jogador %d ou aperte ENTER para seguir: ", i + 1);

            fgets(j[i].nome_jogador, sizeof(j[i].nome_jogador), stdin);
            j[i].nome_jogador[strcspn(j[i].nome_jogador, "\n")] = '\0';

            if (j[i].nome_jogador[0] == '\0') {
                if (i == 0) {
                    printf("O primeiro jogador é obrigatório!\n");
                    lerTecla();
                    limpatela();
                    i--;
                    continue;
                }

                break;
            }

            j[i].id_jogador = i + 1;
            j[i].dinheiro_jogador = 1000;

            quantidade_jogadores++;
            limpatela();
        }
        limpatela();
        desenharMenu();
        listar_jogadores();

        printf("Aperte ENTER para confirmar a lista de jogadores\n");
        printf("Aperte ESC para recomeçar a lista\n");

        char tecla = lerTecla();

        if (tecla == 27) {
            for (int i = 0; i < 4; i++) {
            j[i] = (jogador){0};
        }
            reiniciar = 1;
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




