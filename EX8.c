#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int n, maior,menor;

	printf("Informe um numero: ");
	scanf("%d",&n);

while(n>=0){
	if(n>maior){
		maior=n;
	}
	if(n<menor){
		menor=n;
	}
 	printf("Informe outro numero: ");
	scanf("%d", &n);
	}

	printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

	return 0;
}

/*Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite 
um n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido*/
