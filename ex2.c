#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("a primeira nota: ");
    scanf("%f", &nota1);

    printf("a segunda nota: ");
    scanf("%f", &nota2);

    printf("a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media das notas sao: %.2f\n", media);

    return 0;
}