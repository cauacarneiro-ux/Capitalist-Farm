#ifndef FUNCOES_H
#define FUNCOES_H

#include <windows.h>
#include <stdbool.h>
#include "estruturas.h"

extern jogador j[4];
extern producao *p;
extern campo *c;
extern eventos *e;


//FUN합ES PARA INICIALIZA플O DE ESTRUTURAS

void inicializar_jogador(jogador j[4]);
void inicializar_producao(producao *p, int id_producao, char nome_producao[20], float custo_producao, float lucro_producao);
void inicializar_campo(campo *c, int id_campo, char tipo_campo[10], producao *producao_campo);
void inicializar_evento(eventos *e, int id_eventos, char nome_eventos[20], int tipo_eventos);




//FUN합ES DO MENU DO JOGO

char iniciar_jogo();





//FUN합ES DIVERSAS

void limpatela();
void pausatela();
char lerTecla();
void esconder_cursor();
void listar_jogadores();


#endif
