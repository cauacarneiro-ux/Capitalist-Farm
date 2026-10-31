#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include "estruturas.h"

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

void inicializar_jogador(jogador *j, int id_jogador, char nome_jogador[20], float dinheiro_jogador, int campos_jogador){
    for(int i=1; i<=4; i++){

    }
}



//IMPLEMENTAÇÃO FUNÇÕES DE MENU

bool iniciar_jogo(){
    printf("=============================================\n");
    printf("          🌾 CAPITALIST FARM 🌾              \n");
    printf("=============================================\n");
    printf("                                             \n");
    printf("                 __|__                       \n");
    printf("            ____/     \\____                  \n");
    printf("           /               \\                 \n");
    printf("          /   _       _     \\                \n");
    printf("         /___|_|_____|_|_____\\               \n");
    printf("             |  _   _  |                     \n");
    printf("             | | | | | |                     \n");
    printf("        _____|_|_|_|_|_|_____                 \n");
    printf("       /                     \\                \n");
    printf("      /_______________________\\               \n");
    printf("                                             \n");
    printf("       $$$  PLANT. HARVEST. PROFIT.  $$$     \n");
    printf("                                             \n");
    printf("=============================================\n");
    printf("\n\nDigite qualquer tecla para iniciar o jogo\n\n");
    lerTecla();
    return true;
}




