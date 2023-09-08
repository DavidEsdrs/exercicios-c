#include <stdio.h>

int main() {
  float tempK, tempC;

  printf("forneca uma temperatura em graus K: ");
  scanf("%f", &tempK);

  tempC = tempK - 273.15;

  printf("%.2f K em C eh %.2f", tempK, tempC);

  return 0;
}