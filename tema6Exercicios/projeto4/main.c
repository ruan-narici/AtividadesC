/*
Fa�a um algoritmo que leia 50 n�meros inteiros e armazene-os em um vetor.
Copie para um segundo vetor de 50 n�meros inteiros cada elemento do primeiro, observando as seguintes regras:

Se o n�mero for par, preencha a mesma posi��o do segundo vetor com o n�mero sucessor do contido na mesma posi��o do primeiro vetor;
Se o n�mero for �mpar, preencha a mesma posi��o do segundo vetor com o n�mero antecessor do contido na mesma posi��o do primeiro vetor.
Ao final, mostre o conte�do dos dois vetores simultaneamente.

Estrutura de dados: Dois vetores de 50 posi��es de n�meros inteiros.
*/

#include <stdio.h>

void main(){

    int qtd = 5;
    int primeiroVetor[qtd];
    int segundoVetor[qtd];

    for (int i = 0; i < qtd; i++) {

        printf("Digite um numero: " );
        scanf(" %d", &primeiroVetor[i]);

        if (primeiroVetor[i] %2 == 0) {
            segundoVetor[i] = primeiroVetor[i] + 1;
        } else if (primeiroVetor[i] %2 == 1){
            segundoVetor[i] = primeiroVetor[i] - 1;
        } else {
            segundoVetor[i] = primeiroVetor[i];
        }
    }
    printf("\n#-> DADOS");
    for (int i = 0; i < qtd; i++) {
        printf("\nprimeiroVetor[%d] = %d", i, primeiroVetor[i]);
        printf("\nsegundoVetor[%d] = %d", i, segundoVetor[i]);
    }
}
