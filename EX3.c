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
Fa�a um programa que calcule e mostre a �rea da superf�cie e o volume de uma esfera 
sendo fornecido o valor de seu raio (R). A f�rmula para calcular o volume �: (4/3) * pi * R�. A 
f�rmula para calcular a �rea �: 4 * pi * R�. Considere (atribua) para pi o valor 3.14159. Use o 
conceito de constante Dica: Ao utilizar a f�rmula, procure usar (4/3.0) ou (4.0/3), pois algumas 
linguagens (dentre elas o C++), assumem que o resultado da divis�o entre dois inteiros � 
outro inteiro
*/
