// Mariana Nunes Terol - UC22200554

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,r;

	printf("Informe um numero: ");
	scanf("%d", &n);
	
	for(i=1;i<n+1;i++){
		r=n%i;
		if(r==0){
			printf("%d  ", i);
		}
	}
	getch();
	


	return 0;
}

/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: 
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66*/
