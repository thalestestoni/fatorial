#include <stdio.h>
#include <stdlib.h>

int main(){

    int fatorial;

    printf("Digite um numero para calcular fatorial\n");
    scanf("%d", &fatorial);

    for (int i = fatorial - 1; i > 1; i--){
        fatorial = fatorial * i;
    }

    printf("Resultado: %d\n", fatorial);

    return 0;
}