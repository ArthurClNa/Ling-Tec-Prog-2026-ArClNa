#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float B, b, h, area;
	
	printf("Insira o valor do lado menor:\t");
	scanf("%f", &B);
	printf("Insira o valor do lado maior:\t");
	scanf("%f", &b);
	printf("Insira o valor da altura:\t");
	scanf("%f", &h);
	
	area = ((B+b)*h)/2;
	
	printf("A area do trapezio de medidas:\n%f para o lado menor\n%f para o lado maior\nCom %f de altura\nE de %f", B, b, h, area);
	
	return 0;
	
}
