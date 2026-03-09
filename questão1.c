#include <stdio.h>
int main()
{
    int N;


    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);


    if (N > 0)
    {
        for (int i = 1; i <= N; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Por favor, digite um número positivo.\n");
    }


    return 0;
}
