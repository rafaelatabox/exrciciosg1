#include <stdio.h>

int main() {
  int numero;

 
  printf("Insira um numero: ");
  scanf("%d", &numero);

 
  if (numero % 2 == 0) {
    printf("%d e um numero par.\n", numero);
  } else {
    printf("%d e um nmero impar.\n", numero);
  }

  return 0;
}