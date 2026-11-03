#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

//ESTRUTURAS DE ENTIDADES UTILIZADAS NO JOGO


typedef struct {
    int     id_producao;
    char    nome_producao[20];
    double   custo_producao;
    double   lucro_producao;
} producao;

typedef struct {
    int         id_campo;
    char        tipo_campo[10];
    producao    producao_campo[4];
} campo;

typedef struct {
    int     id_jogador;
    int     status_jogador;
    char    nome_jogador[16];
    double   dinheiro_jogador;
    campo   campos_jogador[4];
} jogador;

typedef struct {
    int     id_eventos;
    char    nome_eventos[20];
    int     tipo_eventos;
} eventos;

typedef struct {
    int id_partida;
    int turnos;
    jogador jogadores_partida[4];
    char vencedor_partida[16];
}partidas;

#endif
