#include <stdio.h>
#include <stdlib.h>

/* programa que lê 10 números e
 com 3 variáveis(i, n, s) do tipo inteiro positivos(ignorando os negativos), 
 não vetores, sem for calcule soma e média */

int main(int argc, char *argv[]) {
	
	int i, n, s;
	
	i = 0;
	s = 0;
	n = 0;
	
	while (i < 10) {
		
		scanf ("%d", &n);
		
		if (n > 0) {
			s += n;
			i++;
		}
	}
	
	printf ("%d | %d", s, s/10);
	
	return 0;
}
