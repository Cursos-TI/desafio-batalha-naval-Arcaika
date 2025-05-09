#include <stdio.h>
// Desafio Batalha Naval - MateCheck
int main() {
// Nível Novato - Posicionamento dos Navios
   
    int Tabuleiro[10][10]= {  //Declaração de uma matriz 10x10. 3 = espaço que návios ocupam, 0 = o mar
        {3,3,3,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}

    };    
    
    printf("Navio batalha 1 está localizado nas seguintes coordernadas: \n[0,0]\n[0,1]\n[0,2]\n");
    printf("Navio batalha 2 está localizado nas seguintes coordernadas: \n[1,7]\n[2,7]\n[3,7]\n");
    printf("\n");
    printf("Matriz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}
