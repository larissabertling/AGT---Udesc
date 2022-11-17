#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main ()

{
   int vet [TAM], i,  maior, menor, pmaior, pmenor, qtdepositivos;
   qtdepositivos = 0;
 
   for (i = 0; i < TAM; i++) {
       scanf("%i", &vet[i]) ;
    } 
 
    maior = vet [0];
    pmaior = 0;
    for (i = 1; i < TAM; i++) {
 	    if (vet [i] > maior) {
 	 	    maior = vet [i];
 	 	    pmaior = i;
 	    }
 	    
    }
 	    
 	menor = vet [0];
    pmenor = 0;
    for (i = 1; i < TAM; i++) {
 	    if (vet [i] < menor) {
 	 	    menor = vet [i];
 	 	    pmenor = i;
 	    }    
 	    	    
   }
   
   printf("Vetor: ");
   for (i = 0; i < TAM; i++) {
       printf("%i ", vet[i]) ;
    } 
    
    printf("\nMaior valor: %i - posicao: %i" , maior, pmaior+1);
    printf("\nMenor valor: %i - posicao: %i" , menor, pmenor+1);
 
   return 0; 

}
