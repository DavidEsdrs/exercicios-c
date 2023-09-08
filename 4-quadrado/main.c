#include <stdio.h>

float quadrado(float a) {
  return a * a;
}

int main() {
  float numero, numQuadrado;

  printf("digite um numero real: ");
  scanf("%f", &numero);

  numQuadrado = quadrado(numero);

  printf("o quadrado de %f e %f", numero, numQuadrado);

  return 0;
}