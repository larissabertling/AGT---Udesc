#include <stdio.h>
#include <stdlib.h>	

int main()
{
	int n[50];
	int i, aux;
	
		for (i=0; i<50; i++)
		{
			if(n[i] == 0)
			{
				aux = n[i];
				n[i]= n[i+1];
				n[i+1] = aux;
			}
		}
		
		for(i=0; i<50; i++)
		{
			printf("\n%d\n", n[i]);
		}
}

