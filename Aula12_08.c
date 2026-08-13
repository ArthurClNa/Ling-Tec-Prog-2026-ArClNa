#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
// Exercício 1	
	int primeiro, segundo, aux;
	
	printf ("Digite o primeiro valor: ");
	scanf("%d", &primeiro);
	printf ("Digite o segundo valor:  ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf ("%d\n%d", primeiro, segundo);

// Exercício 2

	double notacao;
	printf ("\nDigite o valor para fazer notacao: ");
	scanf ("%lf", &notacao);
	
	printf ("\n%.2lf * 10^", notacao);
	
	return 0;
}
