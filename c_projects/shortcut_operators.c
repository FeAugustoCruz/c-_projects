#include <stdio.h>

int main(void)
{
    
    // Operadores de atribuição com os quais estamos acostumandos a substituir uma instrução onde um operador recebe uma variavel como um de seus argumantes e , em seguida atribui resultado de volta a mesma variável. Exemplo:
    // x = x + 1
    // x += 1
    // FORMA GERAL -> [variavel] [operação]= [número para realizar a operação]

    // Atribuição a Soma

    int x  = 10;
    x = x + 2;
    x +=2;

    // Atribuição a Subtração
    int y = 15;
    y = y - 2;
    y -= 2;

    //Atribuição a multiplicação
    int n = 20;
    n * 2;
    n *= 2;

    // Atribuição q uma divisão
    int g = 40;
    g = g / 2;
    g /= 2;

    //Atribuiçção a uma resto de divisão

    int v = 20;
    v = v % 2;
    v %= 2; 
    return 0;
}
