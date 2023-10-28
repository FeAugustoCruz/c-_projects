#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //Variaveis: Local resevado da memória onde utilizamos para armazenar um dado. Esse dado possi diversos tipos, como os listados a seguir:
    int x; // Declaração
    x = 123; // Inicialização de uma variável 
    int y = 321; //Declaração e Inicializzação de uma variável


    // --------------------------REPRESENTAÇÃO DE INTEIROS----------------------

    int inteiro; // O tipo (int) define apena valores Naturais{- inf, -4, -3, 3,0 ,100 ,234 + inf}
    short int inteiro_pequeno = 23432; // 2 bytes (valores de -32.762 a +32.762).
    unsigned short int inteiro_pequeno_positivo = 56321; // 2 bytes (valores de 0 até 65.565) esse tipo de dado pormite com que você possa dobrar o úmero de valores possiveis para inteiros pequenos, pois ele elina a possibilidade de valores negativos. 
    int inteiro_padrao = 2147483647; // 4 bytes (valores de -2147483648 a +2147483647)
    unsigned int inteiro_padrao_positivo = 4294967295;// 4 bytes (valores de 0 a +4294967295)
    long long int inteiro_longo = 9223372036854775807U;// 8 bytes (valores de -9 quintilhões a +9 quintilhões)
    unsigned long long int inteiro_longo_positivo =18446744073709551615U; // 8 bytes (valores de 0 a 18 quintilhões)


    //--------------------------------------------------------------------------

    // -----------------REPRESENTAÇÃO DE PONTOS FLUTUANTES----------------------

    float pi = 3.141592; // até 4 bytes de 6 - 7 dígitos   
    //Define valores com digitos apos a virgula, para esse tipo de dado, se aplica os valores números Racionais {1/3., 3.2231, 4.214, 5/4, 6/11, -5/23} e valores númericos Irracinais {pi, e, raiz quadrada de 2, raiz de 7}
    double long_pi = 3.1415926535897; //  ate 8 bytes de 15 - 16 dígitos 



    bool n = true; // 1 byte (true ou false)




    char media = 'A'; // Suporta valores textuais singulares como {'a', 'A', 't', 'T', '$'}
    char letra = 120; //Esse forma de representação utiliza o padrão ASCII de representação oou seja, números para letras 1 byte (-128 a +127).
    unsigned char letra_positiva = 245; // Essa forma de representação utiliza o padrão ASCII como forma de representação, porém so pode mostrar com valores positivos (unsigned sem sinal) 1 byte (0 - 255).
    char nome[] = "Fernando"; // Suporta valores textuais extessos como {'Olá!', 'Andressa', 'Cuidado jovem garoto!', 'Eu sou Harry Potter'} 





    printf("Um exemplo de valor e %d\n", x);//%d -> Possibilita a formatação de int
    printf("Seu nome e %s\n", nome); //%s -> Possibilita a formatação de char[]
    printf("Sua nota media e de : %c \n", media); // %c -> Possibilia a formatação de char
    printf("O valor de pi e %0.6f \n", pi); // %f -> Possibilita a formatação de float
    printf("O valor longo de pi e %0.13lf \n", long_pi);// %lf Possibilita a formatação de valores com ponto flutuantes mais longos.
    printf("O valor boleano de n e %d \n", n);
    printf("O valor %d convertido pelo padrao ASCII e %c \n", letra, letra);
    printf("O valor %d convertido pelo padrao ASCII e %c (Essa variavel so pode receber valores positivos) \n", letra_positiva, letra_positiva); 
    printf("O valor inteiro pequeno pode ser representado por %d \n", inteiro_pequeno);
    printf("O exemplo de uma variavel inteira pequena e necessariamente positiva e %d \n", inteiro_pequeno_positivo);
    printf("%d\n", inteiro_padrao);
    printf("%u\n", inteiro_padrao_positivo);
    printf("%lld\n", inteiro_longo);
    printf("%llu\n", inteiro_longo_positivo);
    return 0;
}

