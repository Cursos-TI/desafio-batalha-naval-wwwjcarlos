#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int batalhaNaval[5][5], x, y;

    // Carregando o tabuleiro com 0;
    // Linha 1
    batalhaNaval[1][1]=0;
    batalhaNaval[1][2]=0;
    batalhaNaval[1][3]=0;
    batalhaNaval[1][4]=0;
    batalhaNaval[1][4]=0;
    batalhaNaval[1][5]=0;
    // Linha 2
    batalhaNaval[2][1]=0;
    batalhaNaval[2][2]=0;
    batalhaNaval[2][3]=0;
    batalhaNaval[2][4]=0;
    batalhaNaval[2][4]=0;
    batalhaNaval[2][5]=0;
    // Linha 3
    batalhaNaval[3][1]=0;
    batalhaNaval[3][2]=0;
    batalhaNaval[3][3]=0;
    batalhaNaval[3][4]=0;
    batalhaNaval[3][4]=0;
    batalhaNaval[3][5]=0;
    // Linha 4
    batalhaNaval[4][1]=0;
    batalhaNaval[4][2]=0;
    batalhaNaval[4][3]=0;
    batalhaNaval[4][4]=0;
    batalhaNaval[4][4]=0;
    batalhaNaval[4][5]=0;
    // Linha 5
    batalhaNaval[5][1]=0;
    batalhaNaval[5][2]=0;
    batalhaNaval[5][3]=0;
    batalhaNaval[5][4]=0;
    batalhaNaval[5][4]=0;
    batalhaNaval[5][5]=0;

    
    printf ("Exibindo o tabuleiro vazio\n");
    printf("%i %i %i %i %i \n",batalhaNaval[1][1],batalhaNaval[1][2],batalhaNaval[1][3],batalhaNaval[1][4],batalhaNaval[1][4],batalhaNaval[1][5]);
    printf("%i %i %i %i %i \n",batalhaNaval[2][1],batalhaNaval[2][2],batalhaNaval[2][3],batalhaNaval[2][4],batalhaNaval[2][4],batalhaNaval[2][5]);
    printf("%i %i %i %i %i \n",batalhaNaval[3][1],batalhaNaval[3][2],batalhaNaval[3][3],batalhaNaval[3][4],batalhaNaval[3][4],batalhaNaval[3][5]);
    printf("%i %i %i %i %i \n",batalhaNaval[4][1],batalhaNaval[4][2],batalhaNaval[4][3],batalhaNaval[4][4],batalhaNaval[4][4],batalhaNaval[4][5]);
    printf("%i %i %i %i %i \n",batalhaNaval[5][1],batalhaNaval[5][2],batalhaNaval[5][3],batalhaNaval[5][4],batalhaNaval[5][4],batalhaNaval[5][5]);
  
    
    printf("Informe as coordenadas X e Y para o navio na posicao vertical: Ex: X=0 e Y0 ou X=0 e Y=2. \n");
    printf("Informe a posicao X. \n");
    scanf("%i", &x);
    if (x>=1 && x<=5) {
        printf("Informe a posicao Y. \n");
        scanf("%i", &y);
        if (y>=1 && y<=5) {
            batalhaNaval[x][y]=1;
            printf ("Exibindo o tabuleiro com os navios\n");
            printf("%i %i %i %i %i \n",batalhaNaval[1][1],batalhaNaval[1][2],batalhaNaval[1][3],batalhaNaval[1][4],batalhaNaval[1][4],batalhaNaval[1][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[2][1],batalhaNaval[2][2],batalhaNaval[2][3],batalhaNaval[2][4],batalhaNaval[2][4],batalhaNaval[2][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[3][1],batalhaNaval[3][2],batalhaNaval[3][3],batalhaNaval[3][4],batalhaNaval[3][4],batalhaNaval[3][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[4][1],batalhaNaval[4][2],batalhaNaval[4][3],batalhaNaval[4][4],batalhaNaval[4][4],batalhaNaval[4][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[5][1],batalhaNaval[5][2],batalhaNaval[5][3],batalhaNaval[5][4],batalhaNaval[5][4],batalhaNaval[5][5]);
          }
           else {
                printf("Valor informado deve ser entre 1 e 5");
                return 1;
           }
    }        
    else {
            printf("Valor informado deve ser entre 1 e 5");
            return 2;
    }
    
    printf("Informe as coordenadas X e Y para o navio na posicao horizontal: Ex: X=1 e Y1 ou X=1 e Y=3. \n");
    printf("Informe a posicao X. \n");
    scanf("%i", &x);
    if (x>=1 && x<=5) {
        printf("Informe a posicao Y. \n");
        scanf("%i", &y);
        if (y>=1 && y<=5) {
            batalhaNaval[x][y]=1;
            printf ("Exibindo o tabuleiro com os navios\n");
            printf("%i %i %i %i %i \n",batalhaNaval[1][1],batalhaNaval[1][2],batalhaNaval[1][3],batalhaNaval[1][4],batalhaNaval[1][4],batalhaNaval[1][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[2][1],batalhaNaval[2][2],batalhaNaval[2][3],batalhaNaval[2][4],batalhaNaval[2][4],batalhaNaval[2][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[3][1],batalhaNaval[3][2],batalhaNaval[3][3],batalhaNaval[3][4],batalhaNaval[3][4],batalhaNaval[3][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[4][1],batalhaNaval[4][2],batalhaNaval[4][3],batalhaNaval[4][4],batalhaNaval[4][4],batalhaNaval[4][5]);
            printf("%i %i %i %i %i \n",batalhaNaval[5][1],batalhaNaval[5][2],batalhaNaval[5][3],batalhaNaval[5][4],batalhaNaval[5][4],batalhaNaval[5][5]);
          }
        else {
            printf("Valor informado deve ser entre 1 e 5");
            return 3;
        }
    }        
    else {
        printf("Valor informado deve ser entre 1 e 5");
        return 3;
    }
        
return 0;
}