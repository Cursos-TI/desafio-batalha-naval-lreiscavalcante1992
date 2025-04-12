#include <stdio.h>

int main () {
    int tabuleiro [10][10];
    int navioHorizontal [3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int i, j;
    //inicializar tabuleiro com água (0)

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            tabuleiro [i][j] = 0;
        }
        
    }
    // Exibir tabuleiro vazio
    printf("Tabuleiro: \n");
    for ( j = 0; j < 10; j++) {
        printf(" %c", 'a' + j);
    }
    printf("\n");
    for ( i = 0; i < 10; i++)
    {
        if (1 < 9) printf("%d", i + 1);
        
        for (j = 0; j < 10; j++ ) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
// coordenadas fixas para os navios
//navio horizontal de 3 posições começa na linha 2, coluna c (lina=1, coluna = 2)

int linhaH = 1;
int colunaH = 2;

for ( i = 0; i < 3; i++){
    tabuleiro[linhaH][colunaH + i] = navioHorizontal [i];
}

// navio vertical de 3 posições começa em linha 5, coluna 'h' (linha=4, coluna=7)

    int linhaV = 4;
    int colunaV = 7;

    for ( i = 0; i < 3; i++)
    {
        tabuleiro[linhaV + i] [colunaV] = navioVertical[i];
    }
     
    //Exibe o tabuleiro com os navios

    printf("\nTabuleiro com navios:\n");
    for (j = 0; j < 10; j++) {
        printf(" %c", 'a' + j);
    }

    printf("\n");

    for ( i = 0; i < 10; i++)
    {
        if (i < 9)
        {
            printf(" %d", i + 1);
        }else
        {
            printf(" %d", i + 1);
        }
        for ( j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
     return 0;   
        
    }
    
    

