#include <stdio.h>

int main() {
    int a, b, pow = 1;

    printf("Digite o primeiro número (base): ");
    scanf("%d", &a);
    printf("Digite o segundo número (expoente): ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        pow = pow * a;
    }

    printf("Resultado: %d^%d = %d\n", a, b, pow);

    return 0;
}
