#include <stdio.h>
int main(){

char escolha;
escolha = 'D';
escolha = escolha - 2;

printf("A variavel escolha possui o valor: %c ", escolha);
//B

return 0;
}

/*
O valor da vari�vel � �B�. Por se tratar de um caractere, ao realizar a opera��o aritm�tica
para diminuir duas unidades da vari�vel escolha, ficar� aquele que estiver duas posi��es antes
na tabela ASCII (nesse caso, no alfabeto). Vale lembrar que a linguagem C � case sensitive, ou seja,
diferencia letras mai�sculas de min�sculas.
*/
