#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    printf("um numero inteiro: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao um numero primo.\n", num);
    }
    return 0;
}