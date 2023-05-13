#include <stdio.h>
int main(){
	int num,sucessor,antecessor;//declaracao da variavel
	
	printf("Digite um numero:\n");//solicitacao para entrada de dados
	scanf("%d",&num);//entrada de dados
	
	sucessor = num + 1;//operacao para identificar o sucessor
	antecessor = num - 1;//operacao para identificar o antecessor
	
	printf("Sucessor = %d\nAntecessor = %d",sucessor,antecessor);//resultado
	
	
	
}
