int main() {
    int decimal, resto, potenciaDeDois = 1, binario = 0;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        resto = decimal % 2;
        binario += resto * potenciaDeDois;
        potenciaDeDois *= 10;
        decimal = decimal / 2;
    }

    printf("O numero em binario: %d\n", binario);

    return 0;
}
