#include <stdio.h>

typedef unsigned char byte;
typedef int inteiro;
typedef float real;

int main() {

    byte idade = 18;
    inteiro quantidade = 50;
    real altura = 1.75;

    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);

    return 0;
}
