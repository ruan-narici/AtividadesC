//Fa�a um programa que leia 100 n�meros inteiros e
//mostre-os na ordem inversa em que foram lidos.
//Em rela��o � estrutura de dados, o vetor vai armazenar 100 n�meros inteiros.

#include <stdio.h>

void main() {

    int qtd = 100;
    int numeros[qtd];

    for (int i = 0; i < qtd; i++) {

        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("#-> Numero na ordem inversa \n");

    for (int i = qtd -1; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

}
