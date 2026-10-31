#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

#include "estruturas.h"
#include "funcoes.h"
#include "visuais.h"

jogador j[4];

//FUNÇÕES UTILITÁRIAS

void limpatela(){
    system("cls");
}

void pausatela(){
    system("pause");
}

char lerTecla(){
    return getch();
}




//IMPLEMENTAÇÃO INICIALIZAÇÃO DE ESTRUTURAS

void inicializar_jogador(jogador j[4]){
    for(int i=0; i<4; i++){
        if (i == 0){
            printf("Digite o nome do jogador %i: ", i+1);
            fgets(j[i].nome_jogador, sizeof(j[i].nome_jogador), stdin);
            j[i].nome_jogador[strcspn(j[i].nome_jogador, "\n")] = '\0';
            j[i].id_jogador = i+1;
            j[i].dinheiro_jogador = 1000;
            j[i].campos_jogador = {0};
        } else {

        }

    }
}



//IMPLEMENTAÇÃO FUNÇÕES DE MENU

bool iniciar_jogo(){
    desenharMenu();
    lerTecla();
    limpatela();
    return true;
}




