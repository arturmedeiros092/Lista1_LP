#include <stdio.h>
int main() {
    int n, i, primo = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo)
        printf("%d é um número primo.\n", n);
    else
        printf("%d não é um número primo.\n", n);

    return 0;
}
