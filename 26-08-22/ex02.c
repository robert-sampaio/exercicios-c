#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

	// Declaração de Variáveis
	// int - %d, double - %lf, float - %f
    int A, B, Soma;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    Soma = A+B;

    printf("A soma de A e B é igual a %d.", Soma);

	printf("\n\n");
    system("pause");
}
