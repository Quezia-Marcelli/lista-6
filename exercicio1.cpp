#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    /* Inicializa o gerador de numeros aleatórios com a hora atual
    garante que a sequencia de numeros gerados por rand() seja diferente a cada execução*/

    printf("Numero aleatorio: %d\n", 2 + rand() % 11 );
    /* Gera um número aleatório entre 2 e 12
    rand() % 11 gera um valor entre 0 e 10, e soma 2 para ajustar o intervalo*/

    system("pause");
    return 0; 
}
