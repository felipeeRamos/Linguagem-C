//Fazer um programa para encontrar todos os números pares entre 1 e 100.
#include <stdio.h>
int main(){
	int i;

	
	for(i = 1; i <= 100; i++){
		if(i %2 == 0){
			printf("Par = %d\n",i);
		}else {
			printf("Impar = %d\n",i);
		}
	}
}
