// Mariana Nunes Terol - UC22200554 

#include <stdio.h>
#include <stdlib.h>
#unclude <math.h>

int main(void) {
	
	double x1, y1, x2, y2, distancia;
	
	
	printf("Informe os valores de x: ");
	scanf("%lf", &x1);
	scanf("%lf", &x2);
	
	printf("Informe os valores de y: ");
	scanf("%lf", &y1);
	scanf("%lf", &y2);
	
	distancia=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	
	printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) e: %.4f\n", x1, y1, x2, y2, distancia);
	
	return 0;
}

/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no 
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais 
após a vírgula, segundo a fórmula
*/


