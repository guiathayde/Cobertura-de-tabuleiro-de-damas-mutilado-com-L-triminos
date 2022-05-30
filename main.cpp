#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void imprime_tabuleiro(int n, int tabuleiro[][]);

int main(void) {
  int n;
  
  srand(time(NULL));
  n = (rand() % 9 + 2;

  char tabuleiro[n][n];
  
  printf("Tabuleiro %d x %d com o total de %d pecas\n\n", n, n, n * n);
  
  imprime_tabuleiro(n, tabuleiro[n][n]);
  
  printf("\n\n\nEh possivel cobrir o tabuleiro com %d triominos", ((n * n) - 4) / 3);
  
  return 0;
}

void imprime_tabuleiro(int n, int tabuleiro[][]) {
  int numeroLinhas = sizeof(tabuleiro) / sizeof(tabuleiro[0]);

  if (numeroLinhas == 2) {
    for (int i = 0; i < 2; i++)
      for (int j = 0; j < 2; j++)
      {
        if (tabuleiro[i][j] !== '[-]')
        {
          tabuleiro[i][j] = '[T]'
        }
      }
  }
}