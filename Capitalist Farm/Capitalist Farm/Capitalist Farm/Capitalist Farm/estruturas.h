#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

//ESTRUTURAS DE ENTIDADES UTILIZADAS NO JOGO

typedef struct {
    int     id_jogador;
    char    nome_jogador[20];
    float   dinheiro_jogador;
    int     campos_jogador;
} jogador;

typedef struct {
    int     id_producao;
    char    nome_producao[20];
    float   custo_producao;
    float   lucro_producao;
} producao;

typedef struct {
    int     id_campo;
    char    tipo_campo[10];
    int     producao_campo;
} campo;

typedef struct {
    int     id_eventos;
    char    nome_eventos[20];
    int     tipo_eventos;
} eventos;

#endif
