// Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int A,B,C,D, diferenca;
	
	printf("Informe os valores: ");
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&D);
	
	diferenca = (A * B - C * D);
	
 	printf("Diferenca = (%d * %d - %d * %d)\nDiferenca = %d", A, B, C, D, diferenca);
	
	return 0;
}

/*
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do 
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D). 
Apresente o resultado da seguinte forma: 
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”) 
DIFERENCA = (“valor de DIFERENCA”)
*/
