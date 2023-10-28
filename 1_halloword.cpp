#include <iostream>

//<iostream é um arquivo de cabeçãlho que contem funções de entrada e saída básicas (inputs e outputs)>//

int main(){
    std::cout << "I like pizza! " << std::endl;
    std::cout << "If u dont like, fuck of!" << std::endl;

    /*
    comentario
    
    longo
    !
    !
    !
    !
    */

    //Uma outra forma de escrever //
    std::cout << "I screed !" << '\n';
    std::cout << "Opa sou brazuca!" << '\n';

    //std::cout significa caractere padrão de saída (vamnos exibirt alguns caaracteres de saída)//
    //"<<" significam o fim da sequencia de caracteres! //
    //">>" significa o inicio da sequencia de caractes! //
    //std::endl -> diz o fechamento da instrução de sequencia de caractere, diz para o computador pular para a prixima linha basicamente //
    //O endl diz ao compilador que permaneça na mesma linha de código, caso queora quebrala adicione no lugar '\n' em vez de 'sdl::endl'//
    return 0;
}