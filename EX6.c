// Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int soma = 0, i;
	
    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }
    printf("A soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 e: %d\n", soma);
    return 0;
}

/*Fa�a um programa que exiba a soma de todos os n�meros naturais abaixo de 1.000 
que s�o m�ltiplos de 3 ou 5.*/

