#include <stdio.h>

int main() {
    int binario, digito, decimal = 0, potenciaDeDez = 1;

    printf("Digite um numero binario: ");
    scanf("%d", &binario);

    while (binario > 0) {
        digito = binario % 10;
        decimal += digito * potenciaDeDez;
        potenciaDeDez *= 2;
        binario = binario / 10;
    }

    printf("O numero em decimal: %d\n", decimal);

    return 0;
}
