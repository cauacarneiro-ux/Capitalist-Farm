#ifndef FUNCOES_H
#define FUNCOES_H

#include <windows.h>
#include <stdbool.h>
#include "estruturas.h"

//VARIÁVEIS PARA ESTRUTURAS

extern jogador j[4];
extern producao *pro;
extern campo *c;
extern eventos *e;
extern partidas *par;


//FUNÇÕES PARA INICIALIZAÇÃO DE ESTRUTURAS

void inicializar_jogador(jogador j[4]);
void inicializar_producao(producao *pro);
void inicializar_campo(campo *c);
void inicializar_evento(eventos *e);
void inicializar_partida(partidas *par);




//FUNÇÕES DO MENU DO JOGO

char iniciar_jogo();




//FUNÇÕES DIVERSAS

void limpatela();
void pausatela();
char lerTecla();
void esconder_cursor();
void listar_jogadores(const jogador j[4]);
int ler_nome(char nome[], size_t tamanho);


#endif
