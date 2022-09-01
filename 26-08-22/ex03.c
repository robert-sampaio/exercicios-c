#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração de Variáveis
	float metro;
	
	printf("Metros: ");
	scanf("%f", &metro);
	
	float cm = metro*100;
	
	printf("Seu valor de metros para centímetros é igual a %.2f.", cm);
	
	printf("\n\n");
	system("pause");
}
