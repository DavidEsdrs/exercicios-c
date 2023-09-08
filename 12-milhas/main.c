#include <stdio.h>

int main() {
  float distanciaM, distanciaKM;

  printf("Escreva uma distancia em milhas: ");
  scanf("%f", &distanciaM);

  distanciaKM = distanciaM * 1.61;

  printf("%f milhas em km sao %.1f km", distanciaM, distanciaKM);

  return 0;
}