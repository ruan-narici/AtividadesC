/*
Leia uma sequ�ncia de letras, terminada na letra (�z�), e mostre quantas vezes cada vogal
(a, e, i, o, u) apareceu, no emulador a seguir.
Estrutura de dados: O vetor vai armazenar 5 n�meros inteiros. Cada posi��o do vetor vai
acumular a quantidade de vezes que cada vogal (A, E, I, O, U) apareceu. O �ndice 0 (zero)
corresponde ao total de vogais �A�, o �ndice 1 corresponde � vogal �E�, e assim sucessivamente,
at� o �ndice 4, que vai armazenar a vogal �U�.
*/

#include <stdio.h>

void main() {

    //a=0,e=1,i=2,o=3,u=4
    int contador[5];
    for (int i = 0; i < 5; i++) {
        contador[i] = 0;
    }
    char letra;
    char letras[5] = {'a', 'e', 'i', 'o', 'u'};

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    while (letra != 'z') {
        switch (letra) {
            case 'a': {
                contador[0]++;
                break;
            }
            case 'e': {
                contador[1]++;
                break;
            }
            case 'i': {
                contador[2]++;
                break;
            }
            case 'o': {
                contador[3]++;
                break;
            }
            case 'u': {
                contador[4]++;
                break;
            }
        }
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);
    }
    printf("#-> DADOS\n");
    for (int i = 0; i < 5; i++) {
        printf("A letra '%c' apareceu %d vezes \n", letras[i], contador[i]);
    }

}
