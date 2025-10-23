#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n=== Movimento do Bispo ===\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    printf("\n=== Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\nMovimentação concluída com sucesso!\n");
    return 0;
}
