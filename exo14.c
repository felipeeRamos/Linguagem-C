#include <stdio.h>
int main(){
	float num1,num2,res;//decklara��o das variaveis float
	char op;//Declara��o da variavel que vai armazenar o caracter que o usuario escolher
	
	printf("Qual operacao deseja fazer?\n");//Pergunta para o usuario escolher qual opera��o deseja fazer
	printf("'+' = Adi��o\n");
	printf("'-' = Subtra��o\n");
	printf("'*' = Multiplica��o\n");
	printf("'/' = Divis�o\n");
	scanf("%c",&op);//Entrada de dados
	
	printf("Agora digite os valor para fazer a operacao:\n");//Solicita��o para o usuario dar entrada nos numeros para fazer a opera��o
	scanf("%f%f",&num1,&num2);////Entrada de dados
	
	
	
	if(op == '+'){//Codi��o caso o caracter escolhido for '+'
		res = num1 + num2;//Opera�a� com os valores que o usuario digitou
	}else if(op == '-'){//Codi��o caso o caracter escolhido for '-'
		res = num1 - num2;//Opera�a� com os valores que o usuario digitou
	}else if(op == '*'){//Codi��o caso o caracter escolhido for '*'
		res = num1 * num2;//Opera�a� com os valores que o usuario digitou
	}else if(op == '/'){//Codi��o caso o caracter escolhido for '/'
		res = num1 / num2;//Opera�a� com os valores que o usuario digitou
	}else{//E caso nenhuma das condi��es forem verdadeiras 
		printf("Erro na execu��o...");//impirme na tela erro de exxecu��o
		return 0;//fim do programa
	}
	
	printf("%.2f %c %.2f = %.2f",num1,op,num2,res);//resiltado final
	
}
