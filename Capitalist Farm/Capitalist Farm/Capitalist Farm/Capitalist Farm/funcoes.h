#ifndef FUNCOES_H
#define FUNCOES_H

//FUN합ES PARA INICIALIZA플O DE ESTRUTURAS

void inicializar_jogador(jogador *j, int id_jogador, char nome_jogador[20], float dinheiro_jogador, int campos_jogador);
void inicializar_producao(producao *p, int id_producao, char nome_producao[20], float custo_producao, int lucro_producao);
void inicializar_campo(campo *c, int id_campo, char tipo_campo[10], int producao_campo);
void inicializar_evento(eventos *e, int id_eventos, char nome_eventos[20], int tipo_eventos);




//FUN합ES DO MENU DO JOGO

char iniciar_jogo();





//FUN합ES DIVERSAS

void limpatela();
void pausatela();



#endif
