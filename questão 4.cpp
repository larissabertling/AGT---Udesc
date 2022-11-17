#include <stdio.h>

#define TAM 3

int main ()
{
	int vet[TAM], i , pares = 0;
	
	for (i = 0; i < TAM; i ++) {
		scanf("%i", &vet[i]);
	}
	
	printf("Vetor: ");
	for (i = 0; i < TAM; i++) {
		printf("%i ", vet[i]);
		
	}	
		
	for (i = 0; i < TAM; i++) {
		if (vet[i]%2 == 0 ) {
			pares++;
		}
	}
	
	printf("\nPares: %i", pares);
	
}
