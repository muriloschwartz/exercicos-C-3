#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
	char palavra[100];
	int i, x, tamanho;

	printf("digite uma frase:");
	gets(palavra);
	
	tamanho= strlen(palavra);
	printf("resultado :");
	for(i=0; i <= tamanho; i++){
	
     	printf("r-> %c",palavra[i]);
	
	}
	printf("\nfim.\n");
	system ("pause");
	
    return 0;
}
