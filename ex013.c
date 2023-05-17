//Crie um programa para ler 3 notas e mostrar a média delas.
#include <stdio.h>
int main(){
	int i = 0;//Declaração da variavel inteira para fazer a inplementação
	float media,soma,resultado;//Declaração das variaveis do tipo float
	
	printf("Digite os valores para obter a media:\n");//Solicitação para entrada de dados
	while(i < 3){//Loop while para percorrer a variavel ate que dê falso
		scanf("%f",&media);//Dados inseridos do usuario
		soma += media;//Operação para obter a soma dos dados de entrada
		i++;//incremento
	}
	
	resultado = soma/3;//resultado da soma de dados
	
	printf("A media e %.2f",resultado);//Resultado imprimido com o valor da media
	
	return 0;
	
	
}
