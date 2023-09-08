#include <stdio.h>

int main() {
  float velocidadeMS, velocidadeKMH;

  printf("Escreva uma velocidade em M/s: ");
  scanf("%f", &velocidadeMS);

  velocidadeKMH = velocidadeMS * 3.6;

  printf("%.2fM/s eh %.2fKM/h", velocidadeMS, velocidadeKMH);

  return 0;
}