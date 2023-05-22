#include <stdio.h>
int main(){
	float m,dc,cm,mm;//Declaraçao das variaveis float
	
	printf("Digite o valor em metros:\n");//Solicitação para o usuario informar um valor em metros
	scanf("%f",&m);//entrada de dados por parte do usuario
	
	dc = m * 10;//operação para calcular o valor em decimetros
	cm = m * 100;//operação para calcular o valor em centimetros
	mm = m * 1000;//operação para calcular o valor em milimetros
	
	printf("%.2f em Decimetros cooresponde a %.2f\n",m,dc);//imprime na tela o valor em Decimetros
	printf("%.2f em Centimetros cooresponde a %.2f\n",m,cm);//imprime na tela o valor em Centimetros
	printf("%.2f em Milimetros cooresponde a %.2f\n",m,mm);//imprime na tela o valor em Milimetros
	
	return 0;
}
