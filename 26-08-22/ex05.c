#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float altura;

    printf("Altura: ");
    scanf("%f", &altura);

    float pesoi;

    pesoi = (72.7*altura)-58;

    printf("Peso ideal: %.2f", pesoi);

    printf("\n\n");
    system("pause");
}