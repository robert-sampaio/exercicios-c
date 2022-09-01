#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    double tempc;

    printf("Temperatura em Celsius: ");
    scanf("%lf", &tempc);

    double tempf;

    tempf = tempc * 1.8 + 32;

    printf("Temperatura em Fahrenheit: %.1lf F", tempf);

    printf("\n\n");
    system("pause");
}