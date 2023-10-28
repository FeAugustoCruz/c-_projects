#include <stdio.h>
#include <string.h>

int main(void){
    char sabor[25]; // 25 bytes de tamanho máximo suportado
    // Vetor de caracteres não pode ter seu tamanho alterado após a seu definição 
    int idade;

    printf("Que sabor de pizza voce gosta?\n");
    fgets(sabor, 25, stdin); // em que fgets([nome da vaariável], [tamanho dela em bytes], stdin); Observe que quando utilizamos o fgetspodemos realmente representar textos com espaços. POrém um problema é que essa representação é acompanhada por uma quebra de linha e para evitar isso devemos utilizar um método um pouco complexo. e o stdin define o dispositivo de entrada padrão, no caso o teclado 

    sabor[strlen(sabor)-1] = '\0'; // A função strlen() retorna a quantidade de elementos contidos no array 'sabor', podem a quantidade de elementos de um arry é sempre +1 maior que o indices dos respectivos elementos por isso o -1 dessa forma retiramos o \n no final da string

    //scanf("%s", &sabor);
    // O &(endereço do operador) dentro do scarf pode ser traduzido para "O enderelo de", ou seja, ele retornará o endereço de memoria onde a variável está alocada. Cria um ponteiro. Assim o scarf() consegue inserir o dado no local certo.

    // O scarf é usado para dar input em dados. Dentro dela devemos colocar o formato especificador da varialve que iremos inserir. Exemplo se um valor que precisamos aceitar é um numero inteido etão devemos definir: scarf("%d", [nome da variavel]); 

    // O scanf() não inclue o seu ultimo nome ou espaços vazios pois ele não suporta para issod evemos usar fgets()

    printf("Qual e o seu idade?\n");
    scanf("%d", &idade);



    printf("Eu tambem gosto do sabor %s\n", sabor);
    printf("Para a sua idade de %d, voce tem bom gosto!", idade);
    //isso seguido do nome  da variavel  de referência; 


    return 0;
}