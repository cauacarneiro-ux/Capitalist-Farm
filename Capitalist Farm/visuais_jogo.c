#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#include "estruturas.h"
#include "visuais.h"

void desenharMenu(){
    printf("=============================================\n");
    printf("          🌾 CAPITALIST FARM 🌾              \n");
    printf("=============================================\n");
    printf("                                             \n");
    printf("                   __|__                       \n");
    printf("              ____/     \\____                  \n");
    printf("             /               \\                 \n");
    printf("            /   _       _     \\                \n");
    printf("           /___|_|_____|_|_____\\               \n");
    printf("               |  _   _  |                     \n");
    printf("               | | | | | |                     \n");
    printf("          _____|_|_|_|_|_|_____                 \n");
    printf("         /                     \\                \n");
    printf("        /_______________________\\               \n");
    printf("                                             \n");
    printf("     $$$  PLANTE. COLHA. LUCRE.  $$$     \n");
    printf("                                             \n");
    printf("=============================================\n\n");
}

void desenhar_fazendas(char nome[], double dinheiro, int campos, int produtos, char nomes[][21], double saldos[]) {
    printf("\n");
    printf("============================================================================\n");
    printf("                         FAZENDA PRINCIPAL                                 \n");
    printf("============================================================================\n");

    printf("  JOGADOR DA VEZ: %-20s\n", nome);

    printf("  Dinheiro: R$ %-12lld\n", dinheiro);
    printf("  Campos:   %-5d\n", campos);
    printf("  Produtos: %-5d\n", produtos);

    printf("\n");
    printf("  +--------------------------- OPCOES DO TURNO ---------------------------+\n");
    printf("  |                                                                      |\n");
    printf("  |  [1] Plantar produtos                                                |\n");
    printf("  |  [2] Colher produtos                                                 |\n");
    printf("  |  [3] Vender produtos                                                 |\n");
    printf("  |  [4] Comprar campos                                                  |\n");
    printf("  |  [5] Consultar banco                                                 |\n");
    printf("  |  [6] Encerrar turno                                                  |\n");
    printf("  |                                                                      |\n");
    printf("  +----------------------------------------------------------------------+\n");

    printf("\n");
    printf("============================================================================\n");
    printf("                          OUTROS JOGADORES                                 \n");
    printf("============================================================================\n");

    for (int i = 0; i < 3; i++) {
        printf("  +----------------------+");
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("  | %-20.20s |", nomes[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("  |                      |");
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("  | R$ %-16lld |", saldos[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("  +----------------------+");
    }

    printf("\n");
    printf("============================================================================\n");
}
