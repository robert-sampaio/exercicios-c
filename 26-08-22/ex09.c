#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    double valinv, rend;

    printf("Valor investido: ");
    scanf("%lf", &valinv);

    printf("Taxa de rendimento ao mes: ");
    scanf("%lf", &rend);

    double porc, lucro;

    porc = rend / 100;
    lucro = valinv * porc;

    printf("Lucro por mes: R$%.2lf", lucro);

    printf("\n\n");
    system("pause");
}