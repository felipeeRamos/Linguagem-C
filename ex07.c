#include <stdio.h>
int main(){
	int idade;//declaracao da variavel
	
	printf("Digite sua idade:\n");//solicitacao para entrada de dados
	scanf("%d",&idade);//entrada de dados
	
	if(idade < 18){//comparacao para identificar se � menor de idade
		printf("Menor de idade");//se sim imprime que � menor
	}else{
		printf("Maior de idade");//sen�o imprime que � maior
	}
	
	
	
}
