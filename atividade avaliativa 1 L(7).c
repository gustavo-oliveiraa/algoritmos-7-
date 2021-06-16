/*1. Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador;
	double reais[30];
	
	for(contador=1; contador<=30; contador++){
		printf("Digite a nota do aluno %d:", contador);
		scanf("%lf", &reais[contador]);
		fflush(stdin);
	}
	
	printf("Notas recebidas.\n");
		
	system("pause");
	return 0;
}
