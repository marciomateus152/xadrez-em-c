#include <stdio.h>

void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1);
}

void moverBispo(int casasVertical, int casasHorizontal) {
    for (int i = 1; i <= casasVertical; i++) {
        for (int j = 1; j <= casasHorizontal; j++) {
            if (i == j) printf("Cima, Direita (%d)\n", i);
        }
    }
}

void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1);
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentoVerticalCavalo = 2;
    int movimentoHorizontalCavalo = 1;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre, 1);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo, casasBispo);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha, 1);

    printf("\n=== Movimento do Cavalo ===\n");
    for (int i = 1; i <= movimentoVerticalCavalo; i++) {
        printf("Cima (%d)\n", i);
        for (int j = 1; j <= movimentoHorizontalCavalo && i == movimentoVerticalCavalo; j++) {
            printf("Direita (%d)\n", j);
        }
    }

    printf("\nMovimentação concluída com sucesso!\n");
    return 0;
}
