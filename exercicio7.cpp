#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int valor, i,soma;
	soma=0;
	
	for(i=1;i<=10;i++){
	   printf("%d qual o valor?",i);
	   scanf("%d",&valor);
	   soma+=valor;
    }
	printf("resultado:%d",soma);
}
