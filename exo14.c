#include <stdio.h>
int main(){
	float num1,num2,res;//decklaração das variaveis float
	char op;//Declaração da variavel que vai armazenar o caracter que o usuario escolher
	
	printf("Qual operacao deseja fazer?\n");//Pergunta para o usuario escolher qual operação deseja fazer
	printf("'+' = Adição\n");
	printf("'-' = Subtração\n");
	printf("'*' = Multiplicação\n");
	printf("'/' = Divisão\n");
	scanf("%c",&op);//Entrada de dados
	
	printf("Agora digite os valor para fazer a operacao:\n");//Solicitação para o usuario dar entrada nos numeros para fazer a operação
	scanf("%f%f",&num1,&num2);////Entrada de dados
	
	
	
	if(op == '+'){//Codição caso o caracter escolhido for '+'
		res = num1 + num2;//Operaçaõ com os valores que o usuario digitou
	}else if(op == '-'){//Codição caso o caracter escolhido for '-'
		res = num1 - num2;//Operaçaõ com os valores que o usuario digitou
	}else if(op == '*'){//Codição caso o caracter escolhido for '*'
		res = num1 * num2;//Operaçaõ com os valores que o usuario digitou
	}else if(op == '/'){//Codição caso o caracter escolhido for '/'
		res = num1 / num2;//Operaçaõ com os valores que o usuario digitou
	}else{//E caso nenhuma das condições forem verdadeiras 
		printf("Erro na execução...");//impirme na tela erro de exxecução
		return 0;//fim do programa
	}
	
	printf("%.2f %c %.2f = %.2f",num1,op,num2,res);//resiltado final
	
}
