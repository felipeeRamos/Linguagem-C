#include <stdio.h>
int main(){
	int num;//declaracao da variavel
	
	printf("Digite o numero: \n");//solicita��o para entrada de dados
	scanf("%d",&num);//entrada de dados
	
	if(num %2 == 0){ //compara��o para identificar se � par oun impar
		printf("Par = %d",num);//se sim imprime que � par
	}else{//sen�o impirme que � impar
		printf("Impar = %d",num);
	}
	
}
