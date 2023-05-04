// Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int n, a = 0, b = 1, c, i;
    
	printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("O enesimo termo da sequencia de Fibonacci e: %d", a);
    } else if (n == 1) {
        printf("O enesimo termo da sequencia de Fibonacci e: %d", b);
    } else {
        for(i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("O enesimo termo da sequencia de Fibonacci e: %d", c);
    }
    return 0;
}



/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. 
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de 
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos 
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/
