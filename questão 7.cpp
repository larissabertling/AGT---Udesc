#include <stdio.h>

int main()
{
	int vet[20]; 
	int i, cont;
	char flag='n';
	
	
	for (cont=0; cont<20;cont++)
	{
		printf("%d numero: ", cont+1);
		scanf("%d", &vet[cont]);
		
	}
	printf("Numero repetido: ");
		for (cont=0; cont<10; cont++)
		{
			for(i=cont+1;i<10;i++)
			{
				if(vet[cont]==vet){
					flag='s';
					
			}
			}
		if(flag=='s')
		printf("%d", vet[cont]);
		flag='n';
    	}
    	
	prinf("\n");
	system("pause");
	return 0;
		
}
	

