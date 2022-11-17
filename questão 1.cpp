#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[], tam;
	int i, j, min, aux;
	for (i=0; i < (tam - 1); i++)
	{
		min = i;
		for (j = (j+1); j< tam; j++){
			if(num[j] < num [min])
			min = j;
	    }
	    if (num[i] != num[min]){
	    	aux = num[i];
	    	num [i] = num [min];
	    	num [min] = aux;
		}
	}
}
