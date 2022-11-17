#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main ()

{
   int vet [TAM], i,  maior, menor, pmaior, pmenor, qtdepositivos;
   qtdepositivos = 0;
 
   for (i = 0; i < TAM; i++) {
       scanf  ("%i", &vet[i]) ;
    } 
 
    maior = vet [0];
    for (i = 1; i < TAM; i++) {
 	    if (vet [i] > maior) {
 	 	    maior = vet [i];
 	    }
    }
   printf("Vetor: ");
   for (i = 0; i < TAM; i++) {
       printf("%i ", vet[i]) ;
    } 
    
    printf("\nMaior valor: %i" , maior);
 
   return 0; 
}
	
