#include <stdio.h>
#include <stdbool.h>

// Interruptores são: São uma alternativa maus eficiente para usar muitas outras declarações (if) permite que um valor seja testado quanto á igualdade contra muitos casos



int main(void)
{
    char nota;

    bool n = true;

    while(n)
    {
        printf("Qual foi a sua nota [A/B/C/D/F]");
        scanf("%c", &nota);

        switch (nota)
        {
        case 'A':
            printf("Parabens voce foi perfeito!\n");
            break;
        case 'B':
            printf("Voce foi bem!\n");
            break;
        case 'C':
            printf("Voce foi rasuavel\n");
            break;
        case 'D':
            printf("Melhore na proxima!\n");
            break;
        case 'F':
            printf("Voce foi muito mal. Recupercao e logo ali\n");
            break;
        default:
            printf("Valor invalido. Insira um valor valido [A/B/C/D/F]\n");
            break;
        }
    }






    /*if (nota == 'A'){ <- MÁ PRÁTICA DE PROGRAMAÇÃO !!!!!!!!!!!!!
        printf("Parabens voce foi perfeito!");
    }
    else if (nota == 'B'){
        printf("Voce foi bem!");
    }
    else if (nota == 'C'){
        printf("Voce foi rasuavel");
    }
    else if (nota == 'D'){
        printf("Melhore na proxima!");
    }
    else{
        printf("Voce foi muito mal. Recupercao e logo ali");
    }*/ // <- ISSO É UMA MÁ PRATICA DE PORGRAMAÇÃO USE SWITCHS !!!!!!!!!!!!

    return 0;
}
