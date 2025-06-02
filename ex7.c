#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra); 

   
    letra = tolower(letra);

    
    if (letra >= 'a' && letra <= 'z') {
        
        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u') {
            printf("É uma vogal.\n");
        } else {
            printf("É uma consoante.\n");
        }
    } else {
        printf("O letra digitado não é uma letra.\n");
    }

    return 0;
}
