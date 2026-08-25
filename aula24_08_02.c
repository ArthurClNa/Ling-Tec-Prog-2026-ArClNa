#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf ("Identificador de paridade");
	printf ("\nInforme um numero: ");
	scanf ("%d", &a);
	
	if (a % 2 == 0) {
		printf ("O numero e par");
	} else {
		printf ("O numero e impar");
	}
	
	/*======= Outro codigO =======*/
	
	float quadrado;
	
	printf ("\nIdentificador de Quadrado Perfeito");
	printf ("\nDigite um numero: ");
	scanf ("%lf", &quadrado);
	
	if () {
		printf ("\nE um quadrado perfeito: ");
	} else {
		printf ("\nO numero nao e um quadrado perfeito");
	}
	
	/*======= Outro codigO =======*/

	int b, valorAuxiliar;
	
	printf ("Identificador de sinal");
	printf ("\nInforme o numero: ");
	scanf ("%d", &b);
	
	if (b > 0) {
		valorAuxiliar = 1 / b;
		printf ("E positivo e seu inverso e: %d", valorAuxiliar);
	} else if (b < 0) {
		valorAuxiliar = b * b;
		printf ("E negativo e seu quadrado e: %d", b * b);
	} else {
		printf ("E igual a zero");
	}

	return 0;
}
