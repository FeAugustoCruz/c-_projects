#include <stdio.h>

int main(void){
    // As condições são estruturas poderosas que permitem uma certa interatividade entre o usuário e o programa.
    int idade;

    printf("Quantos anos voce tem?");
    scanf("%d", &idade);

    // As condições podem ser aninhadas, isso é a verificação das codições acontece de forma sequêncial. Sendo que se uma condiçã satisfazer o teste lógico esta é execultada e a aninhação acaba.

    // if <- Condição ()<- Teste lógico { }<- escopo da condição
    if(idade >= 18){ 
        printf("Voce ja e maior de idade!");
    }
    else if(idade == 0){
        printf("MENTIRA! voce nao saberia escrever com essa idade!");
    }
    else if (idade < 0){
        printf("Voce nem nasceu ainda!");
    }
    else{
        printf("Voce e menor de idade!");
    }

    return 0;
}
