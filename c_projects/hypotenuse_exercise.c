#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;
    double b;



    printf("---------------CALCULADOR DE HIPOTENUSA---------------\n");

    printf("Digite o valor a (em metros):");
    scanf("%lf", &a);
    printf("Digite o valor b (em metros):");
    scanf("%lf", &b);
    
    double hypo = sqrt(pow(a,2)*pow(b,2));

    
    printf("%.2lfm", hypo);
return 0;
    
}
