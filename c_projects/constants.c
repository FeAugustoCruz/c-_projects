#include <stdio.h>

int main(void)
{
    // Valor constante: Um valor cosntante ou fixo é uma valor imutável, isso é, não pode ser alterado em qualquer instância quando o programa é execultado. Gerando um pouco mais de segurança.


    // OBS: para valores constantes é recomendavel que a variável seja definica com letras maiusculas!

    // Erro: o erro obtido é de natureza error: assignment of read-only variable 'PI', ou seja, não é possivel definir um atribuição a uma variável de somente leitura.

    const float PI = 3.141592;

    printf("%f", PI);
    return 0;
}
