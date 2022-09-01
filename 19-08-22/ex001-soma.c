#include<stdio.h> // para usar o comando printf() e scanf()
#include<stdlib.h> // para usar o comando system()
#include<locale.h> // para usar o comando setlocale()

main(){
    setlocale(LC_ALL, "Portuguese");

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
