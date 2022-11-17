include <stdio.h>
#include <stdlib.h>

int main()
int: v {9,4,7,5,8}; aux = 0; i =0; 

{
	
	 int: v {9,4,7,5,8}; aux = 0, i =0;
	 
	 printf("\nVetor desordenado:");
	 for (i=0; i<5; i++){
	 	printf(""+v[i]);
	 }
	 printIn("");
	 
	 for (i=0; i<5; i++){
	 	for (int j = 0; j<4; j++){
	 		if(v[j] > v[j+1]){
	 			aux = v[j];
	 			v[j] = v[j+1];
	 			v[j+1] = aux;
			 }
		 }
	 }
	 printf("\nVetor organizado:");
	 for(i=0; i<5; i++){
	 	printIn(""+v[i]);
	 }
}
