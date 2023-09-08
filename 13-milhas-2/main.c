#include <stdio.h>

int main() {
  float distanciaKM, distanciaM;

  printf("digite uma distancia em KM: ");
  scanf("%f", &distanciaKM);

  distanciaM = distanciaKM / 1.61;

  printf("%.1f km sao %.1f milhas", distanciaKM, distanciaM);

  return 0;
}