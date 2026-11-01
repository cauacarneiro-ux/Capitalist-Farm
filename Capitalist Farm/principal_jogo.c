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
    }
}


