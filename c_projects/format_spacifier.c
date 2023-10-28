#include <stdio.h>

int main(void)
{
    // especificação de formatação % = Podemos definir e formatar um tipo de dado a ser exibido

    // Para utilizar a formatação você deve usar um sinal de porcentagem e seguido disso um caractere determinado para cada tipo e dado. Observe:


    float item1 = 5.34;
    float item2 = 10.00;
    float item3 = 100.99;

    // %.[número de digitos apos a virgula/ponto] = Precisão decimal ou seja indica quantos números após a virgula devem ser mostrados. 

    printf("O valor do item 1 e: R$%.2f \n", item1);
    printf("O valor do item 2  e: R$%.2f\n", item2);
    printf("O valor do item 3 e: R$%.2f\n", item3);

    // %1 = Largura minima de campo, ou seja, define um espaçamanto depois do cerifa ou quanquer formatação de valor a frente  do número ex: printf("R$8.%f\n", var) - > R$        var.00 

    printf("O valor do item 1 formatado 8 para direita: R$%8.2f \n", item1);
    printf("O valor do item 2 formatado 8 para direita: R$%8.2f\n", item2);
    printf("O valor do item 3 formatado 8 para direita: R$%8.2f\n", item3);

     // %- = Alinhamento a esqueda faz o processo inverso da largura minima de campo. ex: printf("R$%-.2f\n", var) - > R$var.00 

    printf("O valor do item 1 formatado para esquerda: R$%-.2f \n", item1);
    printf("O valor do item 2 formatado para esquerda: R$%-.2f\n", item2);
    printf("O valor do item 3 formatado para esquerda: R$%-.2f\n", item3);


    // Basicamente isso é um formador específico 
    return 0;
}
