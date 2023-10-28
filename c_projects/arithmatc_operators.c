#include <stdio.h>
#include <cs50.h>

#define TEXT = 23;


int main(void)
{
    // Os operadores aritimétocos são de extrema importancia para calculos matematicos em nossos programa, são eles: 
    // + (Adição)
    // - (Subtração)
    // * (Multiplicação)
    // / (divisão)
    // % (Resto da divisão)
    // ++ (Incremento)
    // -- (Decremento)
    int x = 5;
    int y = 2;

    int z = x / y;

    // Essa forma não permite com que exista divisão com fração, pois esse tipo de dado pertece apenas e somente apenas aos tipos de dados float e double.

    printf("A divisao inteira de %d / %d = %d\n",x,y,z);

    //Para solucionar isso devemos fazer com que a divisão seja float e o valor amarznado também:

    int d = 5;
    float q = 2; // 2° Caso: int q = 2;

    float p = d / q; //2° Caso: Também podemos escrever da seguinte forma:
    //float p = d / (float) q; 
 

    // O resto da divisão indica se aquela divisão fio total ou se foi fracionada. Muito util para descobrir um número impar.
    printf("A divisao float de %d / %.1f = %.1f\n", d,q,p);

    int t = x % y;

    printf("O resto da divisao de %d / %d = %d\n", x, y, t);

    int g = 10;
    int m = 2;
    int i = g%m;

    printf("O resto da divisão de %d por / %d = %d \n",g,m,i);


    g++;

    printf("O 10 incrementado por 1 (g++) e: %d\n", g);

    g--;
    g--;

    printf("O 10 decrementado por 1 (g--) e: %d", g);
    return 0;



}
