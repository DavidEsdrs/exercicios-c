#include <stdio.h>

int main() {
  float tempC, tempK;

  printf("Escreva uma temperatura em graus celsius: ");
  scanf("%f", &tempC);

  tempK = tempC + 273.15;

  printf("A temperatura %f C em K eh %f", tempC, tempK);

  return 0;
}