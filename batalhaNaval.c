#include <stdio.h>

int main () {
    int tabuleiro [10][10];
    int navioHorizontal [3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int navioD1[3] = {3,3,3};
    int navioD2[3] = {3,3,3};
    int habilidade_cone [5][5] = {0};
    int habilidade_cruz [5][5] = {0};
    int habilidade_octaedro [5][5] = {0};
    int i, j;
    //inicializar tabuleiro com água (0)

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            tabuleiro [i][j] = 0;
        }
        
    }

    // Posiciona navios no tabuleiro
    for ( i = 0; i < 3; i++) {
        tabuleiro[1][2 + i] = navioHorizontal[i]; //horizontal:linha 2, coluna c-e
        tabuleiro[4 + i][7] = navioVertical [i]; // vertical: col h, linhas 5-7
        tabuleiro[i][i] = navioD1[1]; // diagonal principal: (1a,2b,3c)
        tabuleiro[2 - i][7 + 1] = navioD2 [i]; //diagonal secundaria: (3h, 2i, 3c)
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
        else printf("%d ", i + 1);        
        for (j = 0; j < 10; j++ ) {
            printf("0 ");
        }
        printf("\n");
    }
    //Exibir o tabuleiro com os navios

    printf("\nTabuleiro com navios:\n");
    for (j = 0; j < 10; j++) {
        printf(" %c", 'a' + j);
    }

    printf("\n");

    for ( i = 0; i < 10; i++) {
        if (i < 9) printf(" %d", i + 1);
        else printf(" %d", i + 1);
        for ( j = 0; j < 10; j++){
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    //habilidade: cone (centro 2,2)
    habilidade_cone[2][2] = 5;
    habilidade_cone[3][1] = 5;
    habilidade_cone[3][2] = 5;
    habilidade_cone[3][3] = 5;
    habilidade_cone[4][0] = 5;
    habilidade_cone[4][1] = 5;
    habilidade_cone[4][2] = 5;
    habilidade_cone[4][3] = 5;
    habilidade_cone[4][4] = 5;

    //habilidade: cruz (centro 2,2)
    for ( i = 0; i < 5; i++) {
        habilidade_cruz [2][i] = 5; // linha do meio
        habilidade_cruz [i][2] = 5; // coluna meio
        }
    
        // habilidade: octaedro (diamante com centro 2,2)
        habilidade_octaedro[2][2] = 5;
        habilidade_octaedro[1][2] = 5;
        habilidade_octaedro[2][1] = 5;
        habilidade_octaedro[2][3] = 5;
        habilidade_octaedro[3][2] = 5;
        habilidade_octaedro[0][2] = 5;
        habilidade_octaedro[2][0] = 5;
        habilidade_octaedro[2][4] = 5;
        habilidade_octaedro[4][2] = 5;

        // exibir matriz cone
        printf("\nHabilidade Especial - Cone:\n");
        for ( i = 0; i < 5; i++)        {
            for (j = 0; j < 5; j++) {
                if (habilidade_cone[i][j] == 5)
                printf("5 ");
                else
                printf("0 ");
                }
                printf("\n");
            }
            // Exibir matriz Cruz
            printf("\nHabilidade Especial - Cruz:\n");
            for ( i = 0; i < 5; i++)           {
                for ( j = 0; j < 5; j++)             {
                    if (habilidade_cruz[i][j]==5)
                    printf("5 ");
                    else
                    printf("0 ");               
                }
                 printf("\n");   
                }
                //Exibir matriz Octaedro
                printf("\nHabilidade Expecial - Octaedro:\n");
                for ( i = 0; i < 5; i++)             {
                    for ( j = 0; j < 5; j++)           {
                        if (habilidade_octaedro [i][j]==5)
                        printf("5 ");
                        else
                        printf("0 ");
                        }
                        printf("\n");
                    }
                    return 0;
                }
                
            
  
    
    

