// Mariana Nunes Terol = UC22200554

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int r,a,v;
	
	printf("Informe o raio: ");
	scanf("%d", &r);
	
	v=(4*3.14159*(r*r*r))/3;
	
	a=4*3.14159*r*r;
	
	printf("Volume = %d\n", v);
	printf("Area = %d\n", a);
	
	return 0;
}

/*
Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera 
sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R³. A 
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o 
conceito de constante Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas 
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é 
outro inteiro
*/
