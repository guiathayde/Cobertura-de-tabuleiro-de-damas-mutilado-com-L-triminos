#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void imprime_tabuleiro();

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
}
