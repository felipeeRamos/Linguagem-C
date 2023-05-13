#include <stdio.h>
int main(){
	int a,b,res;
	
	printf("Digite dois numeros para fazer uma soma:\n");
	scanf("%d%d",&a,&b);
	
	res = a + b;
	
	printf("a soma de %d +  %d = %d",a,b,res);
	
	return 0;
}
