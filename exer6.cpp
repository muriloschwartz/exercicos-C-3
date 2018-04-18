#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int primeiro, segundo, resultado, i;
	resultado=0;
	
	printf("digite o primeiro numero:");
	scanf("%d",&primeiro);
	
	printf("digite o segundo numero:");
	scanf("%D",&segundo);
	for(i=primeiro;i<=segundo;i++){
		resultado+=i;
		printf("%d\n",resultado);
	}
	return 0;
	}
	

