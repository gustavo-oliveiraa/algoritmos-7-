/*4. Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que foram lidas.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, x, contadorLetras=0;
	char letras[30]; 
	char letra;
	
	printf("Digite |.| para sair do programa.\n");
	for(contador=1; contador<=30; contador++){
		printf("Digite uma letra:");
		scanf("%c", &letra);
		fflush(stdin);
		contadorLetras++;
		if(letra == '.') break;
		
		else letras[contador] = letra;
		
	
	}
	
	printf("\n\n");
	
	for(x=contadorLetras; x>=0; x--)
		printf("%c", letras[x]);
	
	printf("\n\n");
	
	system("pause");
	return 0;
}
