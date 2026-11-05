#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

#include "estruturas.h"
#include "funcoes.h"
#include "visuais.h"


int main(){
    esconder_cursor();
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF-8");
    char jogoRodando;
    while(1){
        if(iniciar_jogo() == 27){
            break;
        }
        inicializar_jogador(j);
        while(1){
                for(i=0; i<4; i++;){
                    for(j=0; j<4; j++){
                            if(i==j){
                                desenhar_fazendas(j[i].nome_jogador, j[i].dinheiro_jogador, j[i].campos_jogador, j[j].nome_jogador, j[j].dinheiro_jogador);
                            }
                    }
                }
        }

    }
}


