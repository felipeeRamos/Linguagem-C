#include <stdio.h>
int main(){
	int r; //variavel inteira para ser informado o valor do raio
	float area, pi = 3.14;//variaveis float que receberao o resultado da area e do valor de PI
	
	printf("Digite o Raio do circulo \n");//solicitacao para que o usuario digite o raio
	scanf("%d",&r);//leitura do dado digiteado
	
	area = pi * (r*r);//operacao para ser descoberta a area 
	
	printf("A area do circulo eh %.2f",area);//resultado da operacao armazenado na variavel area
	
	
	
}
