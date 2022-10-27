#include<stdio.h>  //printf(), scanf()
#include<stdlib.h> //system()
#include<locale.h> //setlocale()

main(){
    setlocale(LC_ALL, "Portuguese");
    
    // Declaração de variáveis
    // int-%d , float-%f, double-%lf, char-%c
    int hora, min, seg, total_seg;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &hora);

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &min); 

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &seg); 

    total_seg = (hora * 3600)+(min * 60)+30;

    printf("O tempo total em segundos é de %d.", total_seg);
    printf("\n\n");
    system("pause");
}