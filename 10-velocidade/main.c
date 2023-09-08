#include <stdio.h>

int main() {
  float velocidadeKMH, velocidadeMS;

  printf("Escreva uma velocidade em KM/H: ");
  scanf("%f", &velocidadeKMH);

  velocidadeMS = velocidadeKMH / 3.6;

  printf("%fKM/h eh %fM/s", velocidadeKMH, velocidadeMS);

  return 0;
}