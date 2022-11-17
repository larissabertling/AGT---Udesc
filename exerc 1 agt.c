//Implementar o algoritmo que diz se o número é  primo ou nao.

#include <stdio.h>
main (void) {
    int n, i=1, r=0;
    printf("\n Digite seu número: \n");
    scanf("%i",&n); 

    while(i<=n)
    {    if (n%i==0) {r=r+1;} else {}
         i=i+1; 
    }
    if (r==2) {printf("\n O numero é primo \n");      }
    else      {printf("\n O numero não é primo \n");    }

return 0; //fim normal
} //FimAlgoritmo

