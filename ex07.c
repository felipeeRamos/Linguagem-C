#include <stdio.h>
int main(){
	int idade;//declaracao da variavel
	
	printf("Digite sua idade:\n");//solicitacao para entrada de dados
	scanf("%d",&idade);//entrada de dados
	
	if(idade < 18){//comparacao para identificar se é menor de idade
		printf("Menor de idade");//se sim imprime que é menor
	}else{
		printf("Maior de idade");//senão imprime que é maior
	}
	
	
	
}
