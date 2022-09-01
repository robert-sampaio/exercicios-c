#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    double ganhoh;
    int horast;

    printf("Ganho por hora: ");
    scanf("%lf", &ganhoh);

    printf("Horas trabalhadas no mes: ");
    scanf("%d", &horast);

    // Salário Bruto
    double salb;
    salb = ganhoh * horast;

    // Pago ao INSS
    double inss, pinss;
    inss = 0.08;
    pinss = salb * inss;

    // Pago ao sindicato
    double sind, psind;
    sind = 0.05;
    psind = salb * sind;

    // Imposto de Renda
    double ir, dir;
    ir = 0.11;
    dir = salb * ir;

    // Salário Líquido
    double sall, desconto;
    desconto = pinss + psind + dir;
    sall = salb - desconto;

    printf("- Salario Bruto: R$%.2lf", salb);
    printf("\n");
    printf("- Pago ao INSS: R$%.2lf", pinss);
    printf("\n");
    printf("- Pago ao sindicato: R$%.2lf", psind);
    printf("\n");
    printf("- Desconto do Imposto de Renda: R$%.2lf", dir);
    printf("\n");
    printf("- Salario Liquido: R$%.2lf", sall);

    printf("\n\n");
    system("pause");
}