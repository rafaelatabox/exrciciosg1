#include <stdio.h>

int main() {
  int numero, resultado;

  
  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("\nTabuada de %d:\n", numero);
  for (int i = 1; i <= 10; i++) {
    resultado = numero * i;
    printf("%d x %d = %d\n", numero, i, resultado);
  }

  return 0;
}


