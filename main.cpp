#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void imprime_tabuleiro(int m, int n);

int main(void) {
  int m, n, k;
  int mult;
  
  srand(time(NULL));
  k = (rand() % 7 + (1));
  
  m = pow(2, k + 1);
  n = pow(2, k + 1);
  
  mult = m * n;
  
  printf("Tabuleiro %d x %d com o total %d pecas\n\n", m, n, mult - 4);
  
  imprime_tabuleiro(m, n);
  
  printf("\n\n\nE possivel cobrir o tabuleiro com %d L-triminos", (mult - 4) / 3);
  
  return 0;
}

void imprime_tabuleiro(int m, int n) {
  int i, j = 0;
  int pb = 2;

  for (i = 0; i < m; i++) { // verificar em qual linha estamos
    printf("\n");

    if (pb == 0) 
    {
      n++;
      j = 1;
    }
    else if (pb == 1)
    {
      n--;
      j = 0;
    }

    for (; j < n; j++) // verificar em qual coluna estamos
    {
      // condicional para verificar as 4 bordas
      if ((i == 0 && j == 0) || (i == 0 && j == n - 1) || (i == m - 1 && j == 1) || (i == m - 1 && j == n - 1))
      {
        printf("[-]");
        pb = 0;
      }
      else if ((j % 2 == 0)) // se par, então preto
      {
        printf("[P]");
        if (j == n - 1)
          pb = 1;
      }
      else // se impar, então branco
      {
        printf("[B]");
        if (j == n - 1)
          pb = 0;
      }
    }
  }
}
