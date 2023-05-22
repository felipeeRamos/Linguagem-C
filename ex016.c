#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;//Declaraação das variaveis
	
	for(i = 1; i <= 9; i++){//Loop For para repetir o primeiro numero da tabuada
		for(j = 1;j <=10 ; j++){//Loop FOor para mudar o numero que vai ser multiplicado
			printf("%d x %d = %d\n",j,i,i*j);//imprime o resultado de i*j a cada repetição
		}
		printf("\n");//pular linha 
	}
	
	return 0;
	
}
