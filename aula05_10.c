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
	
	int valor[10];
	
	printf ("Escreva os numeros: \n");
	
	int i;
	// PARA (INICIAL, CONDIÇÃO, INCREMENTO
	for (i = 0; i < 10; i++) {
		scanf ("\n%d", &valor[0]);
	}
	for (i=9; i>0; i--){
		printf ("\n%d\n", valor[0]);
	}
	scanf ("%d", &valor[1]);
	
	printf ("\n\nO valor escrito foi: %d\n", valor[1]);
	scanf ("%d", &valor[2]);
	
	printf ("\nO valor escrito foi: %d\n", valor[2]);
	scanf ("%d", &valor[3]);
	
	printf ("\nO valor escrito foi: %d\n", valor[3]);
	scanf ("%d", &valor[4]);
	
	printf ("\nO valor escrito foi: %d\n", valor[4]);
	scanf ("%d", &valor[5]);
	
	printf ("\nO valor escrito foi: %d\n", valor[5]);
	scanf ("%d", &valor[6]);
	
	printf ("\nO valor escrito foi: %d\n", valor[6]);
	scanf ("%d", &valor[7]);
	
	printf ("\nO valor escrito foi: %d\n", valor[7]);
	scanf ("%d", &valor[8]);
	
	printf ("\nO valor escrito foi: %d\n", valor[8]);
	scanf ("%d", &valor[9]);
	
	printf ("\nO valor escrito foi: %d\n", valor[9]);

	
	return 0;
}
