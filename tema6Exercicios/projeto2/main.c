//Fa�a um programa que leia a nota de 20 alunos da turma e
//mostre as que s�o iguais ou superiores � m�dia da turma.
//Estrutura de dados: O vetor armazenar� 20 n�meros reais.

#include <stdio.h>

void main() {

    int qtd = 20;
    float notas[qtd];
    float somaTotalNotas;
    float mediaTotalNotas;

    for (int i = 0; i < qtd; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);
        somaTotalNotas += notas[i];
    }

    mediaTotalNotas = somaTotalNotas / qtd;
    printf("A media da turma e %.1f\n", mediaTotalNotas);

    for (int i = 0; i < qtd; i++) {
        if (notas[i] >= mediaTotalNotas) {
            printf("%.1f esta acima da media\n", notas[i]);
        }
    }
}
