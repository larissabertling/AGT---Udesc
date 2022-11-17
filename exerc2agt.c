// Elabore um algortimo que imprima todos os números primos existentes entre N1 e N2, em que N1 e N2 são números naturais fornecidos pelo usuário.


#include <stdio.h>
main 
(void) {
    int l, u, x, i;
    printf ("\n Entre com dois numeros ");
    scanf("%d%d", &l, &u);
    for (x=l+1;x<=u-1;x++){
        for(i=2;i<x;i++)
        id (x%i==0);
          break;

    if(i==x)
      printf("%d",x);

   }

}//FimAlgoritmo