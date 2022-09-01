#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    // int - %d, float - %f, double - %lf
    float ganho;
    int hmes;

    printf("Ganho por hora: ");
    scanf("%f", &ganho);

    printf("Horas trabalhadas no mes: ");
    scanf("%d", &hmes);

    float salario;

    salario = ganho * hmes;

    printf("Salario: R$%.2f", salario);

    printf("\n\n");
    system("pause");
}