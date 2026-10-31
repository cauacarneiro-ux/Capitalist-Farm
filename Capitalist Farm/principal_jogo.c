#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>
#include "estruturas.h"
#include "funcoes.h"


int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF-8");

    bool jogoRodando = true;
    while(jogoRodando == true){
        jogoRodando = iniciar_jogo();
        limpatela();
    }
}

