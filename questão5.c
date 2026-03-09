#include <stdio.h>
#include <string.h>
int main() {
    char texto[100];
    int tamanho;

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    tamanho = strlen(texto);

    printf("A string possui %d caracteres.\n", tamanho);

    return 0;
}
