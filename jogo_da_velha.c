#include <stdio.h>
int main(){

    char tabuleiro[3][3];

    for (int i = 0; i < 3; i++) 

    tabuleiro[0][0] = ' ';
    tabuleiro[0][1] = ' ';
    tabuleiro[0][2] = ' ';

    tabuleiro[1][0] = ' ';
    tabuleiro[1][1] = ' ';
    tabuleiro[1][2] = ' ';

    tabuleiro[2][0] = ' ';
    tabuleiro[2][1] = ' ';
    tabuleiro[2][2] = ' ';

    printf("Tabuleiro prontinho!\n");

    printf("/n");
    printf("  0  1  2  /n");
    
    printf("0 %c | %c | %c /n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("")

    return  0;
}

