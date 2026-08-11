#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415926535897932384626433832795028841971693993751

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, area;
	
	printf("Insira o valor do raio:\t");
	scanf("%f", &raio);
	
	area = pi*raio*raio;
	printf("A area do circulo de raio %f e %f", raio, area);
	
	return 0;
	
}
