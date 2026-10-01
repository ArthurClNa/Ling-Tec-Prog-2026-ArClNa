#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcPr, opcEx;
	
	printf ("Informe prova voce deseja verificar(1, 2 ou 3): ");
	scanf ("%d", &opcPr);
	
	switch (opcPr) {
		case 1:
			printf ("Digite o exercicio que deseja rodar(0, 1 ou 2): ");
			scanf ("%d", &opcEx);
			
			switch (opcEx) {
				case 0:
					printf ("Exercicio 0 da Prova da sala de ADSIS Noturno Turma A");
					
					int primeiro, segundo, terceiro, quarto, quinto;
					
					printf ("\nDigite 5 numeros inteiros: ");
					scanf ("%d %d %d %d %d", &primeiro, &segundo, &terceiro, &quarto, &quinto);
					
					if (primeiro == segundo + 1 || primeiro == segundo - 1) {
						printf ("%d e %d sao consecutivos", primeiro, segundo);
					}
					if (segundo == terceiro + 1 || segundo == terceiro - 1) {
						printf ("%d e %d sao consecutivos", segundo, terceiro);
					}					
					if (terceiro == quarto + 1 || terceiro == quarto - 1) {
						printf ("%d e %d sao consecutivos", terceiro, quarto);
					}				
					if (quarto == quinto + 1 || quarto == quinto - 1) {
						printf ("%d e %d sao consecutivos", quarto, quinto);
					}							
				break;
				case 1:
					printf ("Exercicio 1 da Prova da sala de ADSIS Noturno Turma A");
					
					float peso, altura, imc;
					
					printf ("\nInforme seu peso em quilogramas: ");
					scanf ("%f", &peso);
					printf ("Digite a sua altura em metros: ");
					scanf ("%f", &altura);
					
					imc = peso / altura * altura;
					
					if (imc < 18.5) {
						printf ("Seu IMC e de %f, considerado abaixo do peso", imc);
					} else if (imc >= 18.5 || imc <= 24.9) {
						printf ("Seu IMC e de %f, considerado normal", imc);
					} else if (imc >= 25 || imc <= 29.9) {
						printf ("Seu IMC e de %f, considerado acima do peso", imc);
					} else if (imc >= 30) {
						printf ("Seu IMC e de %f, considerado obeso", imc);
					}
				break;
				case 2:
					printf ("Exercicio 2 da Prova da sala de ADSIS Noturno Turma A");
					int discoA, anelB, donutC;
					discoA = 6;					
					
					printf ("\nSe no primeiro pino estao todos os discos, entao e necessario passar primeiramente o menor disco para o pino final, neste caso o terceiro pino: 6(1+2+3) 0 0 -> 5(2+3) 0 1(1)");
					
					discoA = discoA - 1;
					donutC = 0 + 1;
					
					printf ("\nApos isso pegue o disco medio e o coloque no pino do meio: 5(2+3) 0 1 -> 3(3) 2(2) 1(1)");
					
					discoA = discoA - 2;
					anelB = 0 + 2;
					
					printf ("\nO menor disco, aquele que esta no terceiro pino, tem que ser colocado em cima do disco medio, no pino do meio: 3(3) 2(2) 1(1) -> 3(3) 3(1+2) 0");
					
					donutC = donutC - 1;
					anelB = anelB + 1;
					
					printf ("\nCom o caminho livre, e possivel colocar o disco grande no terceiro pino: 3(3) 3(1+2) 0 -> 0 3(1+2) 3(3)");
					
					discoA = discoA - 3;
					donutC = donutC + 3;
					
					printf ("\nPara liberar a passagem do disco medio, leve o disco menor para o primeiro pino: 0 3(1+2) 3(3) -> 1(1) 2(2) 3(3)");
					
					discoA = discoA + 1;
					anelB = anelB - 1;
					
					printf ("\nO disco medio vai para o terceiro pino e fica em cima do grande: 1(1) 2(2) 3(3) -> 1(1) 0 5(2+3)");
					
					anelB = anelB - 2;
					donutC = donutC + 2;
					
					printf ("\nPor fim, o disco menor vai para o terceiro pino, completando a torre: 1(1) 0 5(2+3) -> 0 0 6(1+2+3)");
					
					discoA = discoA - 1;
					donutC = donutC + 1;
				break;
				default:
					printf ("Digite um numero de 0 a 2.\n");
			}
			
		break;
		case 2:
			printf ("Digite o exercicio que deseja rodar(0, 1 ou 2): ");
			scanf ("%d", &opcEx);
			switch (opcEx) {
				case 0:
					printf ("Exercicio 0 da Prova da sala de ESOFT Matutino Turma A");
					
				break;
				case 1:
					printf ("Exercicio 1 da Prova da sala de ESOFT Matutino Turma A");
					
				break;
				case 2:
					printf ("Exercicio 2 da Prova da sala de ESOFT Matutino Turma A");
					
				break;
				default:
					printf ("Digite um numero de 0 a 2.\n");
			}
			
		break;
		case 3:
			printf ("Digite o exercicio que deseja rodar(0, 1 ou 2): ");
			scanf ("%d", &opcEx);
			switch (opcEx) {
				case 0:
					printf ("Exercicio 0 da Prova da sala de ESOFT Matutino Turma B");
					
				break;
				case 1:
					printf ("Exercicio 1 da Prova da sala de ESOFT Matutino Turma B");
					
				break;
				case 2:
					printf ("Exercicio 2 da Prova da sala de ESOFT Matutino Turma B");
					
				break;
				default:
					printf ("Digite um numero de 0 a 2.\n");
			}
			
		break;
		default:
			printf ("Digite um numero de 1 a 3.");
	}
	
	printf ("%d %d", opcPr, opcEx);
	return 0;
}
