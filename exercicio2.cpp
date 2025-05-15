#include <stdio.h>
#include <stdlib.h>

int soma (int n){
    if(n == 1)
        return 1; // A soma até 1 é 1
    return n + soma(n - 1); // Passo recursivo: n + soma dos anteriores
}

int main(){
    int num; 
    printf("Digite um numero para calcular a soma dos numeros naturais até o numero: ");
    scanf("%d", &num);

    if(num < 1)
        printf("Digite um número natural maior ou igual a 1.\n");
    else
        printf("Soma: %d\n", soma(num)); // Exibe o resultado da função soma, que calcula a soma dos números naturais até 'num'

    system("pause");
    return 0;
}