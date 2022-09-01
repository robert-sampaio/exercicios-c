#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de Variáveis
	double area, pi, raio;
	
	printf("Digite o valor do raio(cm): ");
	scanf("%lf", &raio);
	
	pi = 3.14159;
	area = pi * pow(raio, 2);
	
	printf("A área da sua circunferência é igual a %.2lf cm².", area);
	
	printf("\n\n");
	system("pause");
}
