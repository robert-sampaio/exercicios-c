#include<stdio.h>  //printf(), scanf()
#include<stdlib.h> //system()
#include<locale.h> //setlocale()

main(){
    setlocale(LC_ALL, "Portuguese");
    
    // Declaração de variáveis
    // int-%d , float-%f, double-%lf, char-%c
    double tempo, km_rodado, vel_media;

    printf("Digite o tempo: ");
    scanf("%lf", &tempo);

    printf("Digite os kms rodados: ");
    scanf("%lf", &km_rodado);

    vel_media = km_rodado / tempo;

    printf("Sua velocidade média é de %.2lfkm/h.", vel_media);

    printf("\n\n");
    system("pause");
}