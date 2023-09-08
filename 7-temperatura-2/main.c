#include <stdio.h>

int main() {
  float tempF, tempC;

  printf("forneca uma temperatura em graus farenheit: ");
  scanf("%f", &tempF);

  tempC = 5 * (tempF - 32) / 9;

  printf("%.2f F em C e %.2f", tempF, tempC);

  return 0;
}