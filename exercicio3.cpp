#include <stdio.h>
#include <stdlib.h>

int digito(int num){
    if (num < 0) // Converte número negativo para positivo
        num = -num;

    if (num < 10) // Número com apenas um dígito
        return 1;

    return 1 + digito(num / 10); // Passo recursivo: remove o último dígito e soma 1
}

int main(){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("O numero tem %d digito(s).\n", digito(n)); // Chama a função e exibe o resultado

    system("pause");
    return 0;
}