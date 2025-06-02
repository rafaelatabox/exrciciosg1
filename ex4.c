#include <stdio.h>

int main() {
  int num, i, fact = 1;

  printf("um numero inteiro positivo: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Fatorial naoo definido para numeros negativos.\n");
  } else {
    for (i = 1; i <= num; i++) {
      fact = fact * i;
    }
    printf("O fatorial de %d é %d\n", num, fact);
  }

  return 0;
}