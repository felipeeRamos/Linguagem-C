#include <stdio.h>
int main(){
	float celcius,fahrenheit;//Declaração de variaveis float
	
	printf("Digite o valor em Celcius:\n");//solicitação para entrada de dados
	scanf("%f",&celcius);//valor que o usuario digitou
	
	fahrenheit = 9 * celcius + 32;//operação para conversão de celcius para fahrenheit
	
	printf("Valor em Fahrenheit eh %f",fahrenheit);//resultado em fahrenheit
	
	return  0;
	
}
