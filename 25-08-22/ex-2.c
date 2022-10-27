#include<stdio.h>  //printf(), scanf()
#include<stdlib.h> //system()
#include<locale.h> //setlocale()
#include<math.h>   // pow(), sqrt()

main(){
    setlocale(LC_ALL, "Portuguese");
    
    // Declaração de variáveis
    // int-%d , float-%f, double-%lf, char-%c
    double a, b, c, delta, x1, x2;

    printf("Digite o valor 1: ");
    scanf("%lf", &a);

    printf("Digite o valor 2: ");
    scanf("%lf", &b);

    printf("Digite o valor 3: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4*a*c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("O delta é igual a %.2lf", delta);
    printf("\n");
    printf("O X1 é igual a %.2lf", x1);
    printf("\n");
    printf("O X2 é igual a %.2lf", x2);
    
    printf("\n\n");
    system("pause");
}