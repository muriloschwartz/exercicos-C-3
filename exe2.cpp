#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
main(){
	char frase[50];
	int i=0,
	k=0,
	tamanho;
	printf("digite uma frase ou palavra:");
	gets(frase);
	tamanho= strlen(frase) -1;
	for(i=0; i <=tamanho; i++){
	if(i %2==0){
	putchar(toupper(frase[i]));
		
	  } else
    putchar(tolower(frase[i]));
	}
	printf("\n");
	system("pause");
	return 0;
		
}
