#include <stdio.h>
int main() {
    int n;
    long long fatorial = 1;


    printf("Digite um número inteiro: ");
    scanf("%d", &n);


    if (n < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial = fatorial * i;
        }


        printf("O fatorial de %d é %lld\n", n, fatorial);
    }


    return 0;
}
