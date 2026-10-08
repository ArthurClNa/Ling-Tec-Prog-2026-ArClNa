#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 10 valores, mostre o maior dentre os 5 primeiros e o menor entre o 5 restantes*/

int comp_maior (int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int main(int argc, char *argv[]) {
	
	int valor[10], maior, menor, i;
	
	printf ("Escreva os numeros: \n");
	
	// PARA (INICIAL, CONDIÇÃO, INCREMENTO)
	for (i = 0; i < 10; i++) {
		scanf ("\n%d", &valor[i]);
	}
	
	for (i = 0; i < 10; i++) {
		printf ("\nO valor no segmento %d do vetor e: %d", i, valor[i]);
	}
	
	maior = valor[0];
	
	for (i = 1, maior = valor[0]; i < 5; i = i + 2) {
		int comp_temp = comp_maior(valor[i], valor[i+1]);
		maior = comp_maior(maior, comp_temp);
	}
	
	printf ("\n %d", maior);
	
	return 0;
}
