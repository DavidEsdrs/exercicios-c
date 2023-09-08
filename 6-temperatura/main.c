#include <stdio.h>

int main() {
  float tempC, tempF;

  printf("forneca uma temperatura em graus celsius: ");
  scanf("%f", &tempC);

  tempF = tempC * (9/5) + 32;

  printf("%.2f C em F e %.2f", tempC, tempF);

  return 0;
}