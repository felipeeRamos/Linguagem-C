//Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.

#include <stdio.h>
int main(){

	int num,i;//Declara��o da variavel
	
		do{//executa o DO
			
			printf("Digite um numero inteiro para saber a tabuada:\n");//Solicita��o para entrada de dados
			scanf("%d",&num);//Dado de entrada
			
		}while(num < 1 || num > 10);//executa o la�o while
	
		for(i = 1; i <= 10; i++)//La�o for para percorrer a tabuada
			printf("%d * %d = %d\n",num,i, num * i);//Imprime o resultado
		
	
}
