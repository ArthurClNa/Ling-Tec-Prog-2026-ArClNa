#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int xA, xB, yA, yB;
	float distancia;
	
	printf ("Informe o p1 (x1,y1): ");
	scanf ("%d,%d", &xA, &yA);
		
	printf ("Informe o p2 (x2,y2): ");
	scanf ("%d,%d", &xB, &yB);
	
	distancia = sqrt(((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA)));
	
	printf ("A distancia e de: %f", distancia);
	
	return 0;
}
