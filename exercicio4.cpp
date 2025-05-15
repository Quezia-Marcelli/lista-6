#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente) {
    if (expoente == 0) // Base elevada a 0 é 1
        return 1;
    else
        return base * potencia(base, expoente - 1); // Passo recursivo
}

int main() {
    int base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (positivo): ");
    scanf("%d", &expoente);

    if (expoente < 0)
        printf("O expoente deve ser positivo.\n");
    else {
        resultado = potencia(base, expoente); // Calcula a potência usando recursão
        printf("%d elevado a %d = %d\n", base, expoente, resultado); // Mostra o resultado
    }

    system("pause");
    return 0;
}

