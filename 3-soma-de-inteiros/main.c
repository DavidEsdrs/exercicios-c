#include <stdio.h>

int main() {
  int a, b, c, soma;

  printf("Digite um numero inteiro a:");
  scanf("%d", &a);

  printf("Digite um numero inteiro b:");
  scanf("%d", &b);

  printf("Digite um numero inteiro c:");
  scanf("%d", &c);

  soma = a + b + c;

  printf("a soma a + b + c e %d", soma);

  return 0;
}