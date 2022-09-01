#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    
    double lado;

    printf("Valor do lado: ");
    scanf("%lf", &lado);

    double area;

    area = pow(lado, 2);

    printf("Area do quadrado: %.2lf", area);

    printf("\n\n");
    system("pause");
}