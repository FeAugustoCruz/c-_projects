#include <stdio.h>
#include <math.h>

int main(void){
    const double PI = 3.14159;
    double raio;
    double circonference;
    double area;

    printf("Digite o raio do circulo que deseja calcular (em cm):");
    scanf("%lf", &raio);

    circonference = 2*PI*raio;

    area = PI*pow(raio, 2);

    printf("O valor da circunferencia de um circulo com %0.2lfcm e de %0.2lfcm\n",raio, circonference);
    printf("E a area e de %.2lfcm2", area);
    return 0;
}