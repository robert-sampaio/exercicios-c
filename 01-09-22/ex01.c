#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    double area, qt_litros, qt_lata, preco;

    printf("Tamanho em metros quadrados: ");
    scanf("%lf", &area);

    qt_litros = area / 3;
    qt_lata = ceil(qt_litros / 18);
    preco = qt_lata * 80;

    printf("Voce precisara de %.2lf litros de tinta.", qt_litros);
    printf("\n");
    printf("Voce precisara de %.1lf latas de tinta.", qt_lata);
    printf("\n");
    printf("Voce precisara gastar R$%.2lf.", preco);

    printf("\n\n");
    system("pause");
}