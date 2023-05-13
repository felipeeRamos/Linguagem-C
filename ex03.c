#include <stdio.h>
int main(){
	int num;//declaracao da variavel
	
	printf("Digite o numero: \n");//solicitação para entrada de dados
	scanf("%d",&num);//entrada de dados
	
	if(num %2 == 0){ //comparação para identificar se é par oun impar
		printf("Par = %d",num);//se sim imprime que é par
	}else{//senão impirme que é impar
		printf("Impar = %d",num);
	}
	
}
