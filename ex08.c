#include <stdio.h>
int main(){
	float celcius,fahrenheit;//Declara��o de variaveis float
	
	printf("Digite o valor em Celcius:\n");//solicita��o para entrada de dados
	scanf("%f",&celcius);//valor que o usuario digitou
	
	fahrenheit = 9 * celcius + 32;//opera��o para convers�o de celcius para fahrenheit
	
	printf("Valor em Fahrenheit eh %f",fahrenheit);//resultado em fahrenheit
	
	return  0;
	
}
