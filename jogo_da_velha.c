#include <stdio.h>

int main() {
    char tabuleiro[3][3];
    int linha, coluna;
    int jogadas = 0;
    char jogadorAtual = 'X';

    // Limpa o tabuleiro antes de começar
    tabuleiro[0][0] = ' '; tabuleiro[0][1] = ' '; tabuleiro[0][2] = ' ';
    tabuleiro[1][0] = ' '; tabuleiro[1][1] = ' '; tabuleiro[1][2] = ' ';
    tabuleiro[2][0] = ' '; tabuleiro[2][1] = ' '; tabuleiro[2][2] = ' ';

    while (jogadas < 9) {

        // Desenha o tabuleiro a cada rodada
        printf("\n");
        printf("   0   1   2 \n");
        printf("0  %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
        printf("  ---|---|---\n");
        printf("1  %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
        printf("  ---|---|---\n");
        printf("2  %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

        printf("\nJogador '%c', digite a linha e a coluna (ex: 0 1): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        // AQUI GUARDA NO TABULEIRO:
        tabuleiro[linha][coluna] = jogadorAtual;

        jogadas++;

        // Troca o jogador
        if (jogadorAtual == 'X') {
            jogadorAtual = 'O';
        } else {
            jogadorAtual = 'X';
        }
    }

    // MOSTRA O TABULEIRO FINAL COM A ÚLTIMA JOGADA!
    printf("\n--- TABULEIRO FINAL ---\n");
    printf("   0   1   2 \n");
    printf("0  %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  ---|---|---\n");
    printf("1  %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  ---|---|---\n");
    printf("2  %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);

    printf("\nFim de jogo! GOJO WINS! EHHEHEHEH\n");

    return 0;
}1