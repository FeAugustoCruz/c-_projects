#include <iostream>


int main(){

    int x = 5;
    int y = 3;
    int sum = x + y;

    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<sum<<std::endl;

    //Inteiros(integre)//
    //os tipos interos tem a capacidade de armazenar apenas valores sem '.' antes ou depois da virgula. Se você tentar atribuir um valor com '.' a uma variável interia o compilador irá truncá-la para um valor interio mais próximo . Observe://
    int a = 3.23;
    int b = 34;

    std::cout<<"Observe que 3.23 foi truncado para 3"<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;

    //Ponto flutuante extendido(double) -> número que inclui um decimal
    double price = 4.99;
    double cifra = 3.21;
    double temperature = 3.1232;

    std::cout << price;
    return 0;
}