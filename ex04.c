#include <stdio.h>
int main(){
	float num1,num2,num3,soma,media;//declaracao das variaveis
	
	printf("Digite os tres numeros: \n");//solicitacao para entrada de dados
	scanf("%f%f%f",&num1,&num2,&num3);//entrada de dados
	
	soma = num1+ num2 + num3;//operacao para somar os numeros
	media = soma/3;//operacao para calcular a media
	
	printf("Media = %.2f",media);//resultado  
	
	
	
}
