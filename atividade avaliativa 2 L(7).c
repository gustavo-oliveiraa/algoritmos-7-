/*2. Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem (menos que 50). 
O número de aluno será informado pelo usuário.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, quantAlunos;
	double reais[30];
	
	do{
		printf("Digite o número de alunos na classe (|49| - max):");
		scanf("%d", &quantAlunos);
		fflush(stdin);
		if(quantAlunos<=0 || quantAlunos > 49)
			printf("\nNúmero inválido!\n\n");
	}while(quantAlunos<=0 || quantAlunos > 49);
	for(contador=1; contador<=quantAlunos; contador++){
		printf("Digite a nota do aluno %d:", contador);
		scanf("%lf", &reais[contador]);
		fflush(stdin);
	}
	
	printf("\nNotas recebidas.\n\n");
		
	system("pause");
	return 0;
}
