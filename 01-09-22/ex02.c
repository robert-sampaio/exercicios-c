#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    double download, velocidade;

    printf("Tamanho do arquivo para download(MB): ");
    scanf("%lf", &download);

    printf("Velocidade de um link de Internet(Mbps): ");
    scanf("%lf", &velocidade);

    double minutos, segundos;

    segundos = download / velocidade;
    minutos =  segundos / 60;

    printf("Tempo aproximado de download(em minutos): %.2lf", minutos);

    printf("\n\n");
    system("pause");
}