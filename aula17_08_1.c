#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero, res, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	printf ("Insira o valor a ser convertido: ");
	scanf ("%d", &numero);
	
	bit_64 = numero % 2;
	res = numero / 2;

	bit_32 = res % 2;
	res = res / 2;
	
	bit_16 = res % 2;
	res = res / 2;
	
	bit_8 = res % 2;
	res = res / 2;
	
	bit_4 = res % 2;
	res = res / 2;	
	
	bit_2 = res % 2;
	res = res / 2;
	
	printf ("O numero n em binario e: %d = %d%d%d%d%d%d%d",numero, res % 2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
	
	return 0;
}
