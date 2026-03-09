#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    } else if (opcao == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperatura em Celsius: %.2f\n", celsius);

    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
