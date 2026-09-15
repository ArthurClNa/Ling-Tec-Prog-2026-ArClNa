#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf ("=-=-=-=-=- Permutação de 4 números -=-=-=-=-=");
	
	int primeiro, segundo, terceiro, quarto, auxiliar;
	
	printf ("Digite os numeros no formato (n1 n2 n3 n4): ");
	scanf ("%d %d %d %d", &primeiro, &segundo, &terceiro, &quarto);
	
	auxiliar = primeiro;
	primeiro = terceiro;
	terceiro = quarto;
	quarto = segundo;
	segundo = auxiliar;
	
	printf ("Os numeros permutados sao: %d %d %d %d", primeiro, segundo, terceiro, quarto);
	
/*-----------------------------------------------------------------------------------------------*/
	
	printf ("\n\nIndicador Preco sobre Valor Patrimonial (P/VP) e Valor Patrimonial por Acao (VPA)");
	
	float p_vp, vpa, valorEmpresa, precoAcao;
	int qtdeAcoes;
		
	printf ("\nInforme o valor patrimonial da empresa: R$");
	scanf ("%f", &valorEmpresa);
	
	printf ("Digite a quantidade de acoes disponiveis: ");
	scanf ("%d", &qtdeAcoes);
	
	printf ("Informe qual o preco atual de uma acao: R$");
	scanf ("%f", &precoAcao);
	
	vpa = valorEmpresa / qtdeAcoes;
	p_vp = precoAcao / vpa;
	
	if (p_vp < 0) {
		printf ("Com VPA = R$%f e P/VP = R$%f\nConcluimos que a classificacao e Pessima", vpa, p_vp);
	} else if (p_vp >= 0.0 && p_vp < 0.8) {
		printf ("Com VPA = R$%f e P/VP = R$%f\nConcluimos que a classificacao e Otima", vpa, p_vp);
	} else if (p_vp >= 0.8 && p_vp <= 1.2) {
		printf ("Com VPA = R$%f e P/VP = R$%f\nConcluimos que a classificacao e Indiferente", vpa, p_vp);
	} else if (p_vp > 1.2 && p_vp <= 2.0) {
		printf ("Com VPA = R$%f e P/VP = R$%f\nConcluimos que a classificacao e Boa", vpa, p_vp);
	} else if (p_vp > 2.0) {
		printf ("Com VPA = R$%f e P/VP = R$%f\nConcluimos que a classificacao e Ruim", vpa, p_vp);
	} else {
		printf ("Valores invalidos");
	}
	
	return 0;
}
