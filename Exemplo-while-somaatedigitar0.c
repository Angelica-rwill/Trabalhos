#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite números (0 para sair):\n");
    scanf("%d", &num);

    while (num != 0) {
        soma += num;
        scanf("%d", &num);
    }

    printf("Soma total: %d\n", soma);
    return 0;
}
