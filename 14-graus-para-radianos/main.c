#include <stdio.h>

int main() {
  const float PI = 3.14; // definição de uma constante em C
  float graus, radianos;

  printf("digite um angulo em graus: ");
  scanf("%f", &graus);

  radianos = graus * PI / 180;

  printf("%.2f graus sao equivalentes a %.2f radianos", graus, radianos);

  return 0;
}