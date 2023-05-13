#include <stdio.h>
int main(){
	int num,i;
	
	do{
		printf("Digite um numero inteiro para saber a tabuada:\n");
		scanf("%d",&num);	
	} while(num < 1 || num > 10);
	
	for(i = 1; i <= 10; i++)
		printf("%d * %d = %d\n",num,i, num * i);
	
}
