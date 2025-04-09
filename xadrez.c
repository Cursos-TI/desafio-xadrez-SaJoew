#include <stdio.h>

int main() {
    int limite = 8;
    int x = 4, y = 4; 

    printf("Movimentos da Torre:\n");
    
    if (x > 1) {
        printf("Cima\n");
    }
    
    if (x < limite) {
        printf("Baixo\n");
    }

    if (y > 1) {
        printf("Esquerda\n");
    }

    if (y < limite) {
        printf("Direita\n");
    }

    printf("\n");

    printf("Movimentos do Bispo:\n");

    if (x > 1 && y < limite) {
        printf("Cima Direita\n");
    }
    if (x > 1 && y > 1) {
        printf("Cima Esquerda\n");
    }

    if (x < limite && y < limite) {
        printf("Baixo Direita\n");
    }

    if (x < limite && y > 1) {
        printf("Baixo Esquerda\n");
    }

    printf("\n");
    printf("Movimentos da Rainha:\n");
    
    if (x > 1) printf("Cima\n");
    if (x < limite) printf("Baixo\n");
    if (y > 1) printf("Esquerda\n");
    if (y < limite) printf("Direita\n");
    
    if (x > 1 && y < limite) printf("Cima Direita\n");
    if (x > 1 && y > 1) printf("Cima Esquerda\n");
    if (x < limite && y < limite) printf("Baixo Direita\n");
    if (x < limite && y > 1) printf("Baixo Esquerda\n");

    printf("\n");

    printf("Movimentos do Cavalo:\n");
    
    if (x > 2 && y < limite - 1) {
        printf("Cavalo: Cima 2, Direita 1\n");
    }
    if (x > 2 && y > 2) {
        printf("Cavalo: Cima 2, Esquerda 1\n");
    }

    if (x < limite - 1 && y < limite - 1) {
        printf("Cavalo: Baixo 2, Direita 1\n");
    }

    if (x < limite - 1 && y > 2) {
        printf("Cavalo: Baixo 2, Esquerda 1\n");
    }

    if (x > 1 && y < limite - 2) {
        printf("Cavalo: Cima 1, Direita 2\n");
    }

    if (x > 1 && y > 1) {
        printf("Cavalo: Cima 1, Esquerda 2\n");
    }

    if (x < limite && y < limite - 2) {
        printf("Cavalo: Baixo 1, Direita 2\n");
    }

    if (x < limite && y > 1) {
        printf("Cavalo: Baixo 1, Esquerda 2\n");
    }

    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int limite = 8;
    int x = 4, y = 4;
    
    printf("Movimentos da Torre:\n");
 
    if (x > 1) {
        printf("Cima\n");
    }
    
    if (x < limite) {
        printf("Baixo\n");
    }

    if (y > 1) {
        printf("Esquerda\n");
    }

    if (y < limite) {
        printf("Direita\n");
    }

    printf("\n");

    printf("Movimentos do Bispo:\n");

    if (x > 1 && y < limite) {
        printf("Cima Direita\n");
    }
    if (x > 1 && y > 1) {
        printf("Cima Esquerda\n");
    }
    if (x < limite && y < limite) {
        printf("Baixo Direita\n");
    }
    if (x < limite && y > 1) {
        printf("Baixo Esquerda\n");
    }

    printf("\n");
    printf("Movimentos da Rainha:\n");
    
    if (x > 1) printf("Cima\n");
    if (x < limite) printf("Baixo\n");
    if (y > 1) printf("Esquerda\n");
    if (y < limite) printf("Direita\n");
    
    if (x > 1 && y < limite) printf("Cima Direita\n");
    if (x > 1 && y > 1) printf("Cima Esquerda\n");
    if (x < limite && y < limite) printf("Baixo Direita\n");
    if (x < limite && y > 1) printf("Baixo Esquerda\n");

    printf("\n");
    printf("Movimentos do Cavalo:\n");
    
    if (x > 2 && y < limite - 1) {
        printf("Cavalo: Cima 2, Direita 1\n");
    }
    if (x > 2 && y > 2) {
        printf("Cavalo: Cima 2, Esquerda 1\n");
    }
    if (x < limite - 1 && y < limite - 1) {
        printf("Cavalo: Baixo 2, Direita 1\n");
    }
    if (x < limite - 1 && y > 2) {
        printf("Cavalo: Baixo 2, Esquerda 1\n");
    }
    if (x > 1 && y < limite - 2) {
        printf("Cavalo: Cima 1, Direita 2\n");
    }
    if (x > 1 && y > 1) {
        printf("Cavalo: Cima 1, Esquerda 2\n");
    }
    if (x < limite && y < limite - 2) {
        printf("Cavalo: Baixo 1, Direita 2\n");
    }
    if (x < limite && y > 1) {
        printf("Cavalo: Baixo 1, Esquerda 2\n");
    }

    printf("\n");

    return 0;
}
