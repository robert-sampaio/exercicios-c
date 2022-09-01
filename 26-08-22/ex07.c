#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    double peso, altura;

    printf("Peso: ");
    scanf("%lf", &peso);

    printf("Altura: ");
    scanf("%lf", &altura);

    double imc;

    imc = peso / pow(altura, 2);

    printf("IMC: %.2lf", imc);

    printf("\n\n");
    system("pause");
}