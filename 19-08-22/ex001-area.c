# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de Variáveis
	// int - %d; float - %f, double - %lf
	double area, raio, pi;
	
	printf("Digite o valor do raio(cm): ");
	scanf("%lf", &raio);
	
	pi = 3.14159;
	area = pi * pow(raio,2);
	
	printf("O valor área da circunferência é %.2lf cm²", area);
	
	printf("\n\n");
	system("pause");
}

