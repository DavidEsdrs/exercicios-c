#include <stdio.h>

int main() {
  float numero, numQuintaParte;

  printf("digite um numero real: ");
  scanf("%f", &numero);

  numQuintaParte = numero / 5;

  printf("quinta parte de numero e %f", numQuintaParte);

  return 0;
}