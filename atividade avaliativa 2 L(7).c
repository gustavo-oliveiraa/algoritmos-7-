/*2. Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem (menos que 50). 
O n�mero de aluno ser� informado pelo usu�rio.*/

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
		printf("Digite o n�mero de alunos na classe (|49| - max):");
		scanf("%d", &quantAlunos);
		fflush(stdin);
		if(quantAlunos<=0 || quantAlunos > 49)
			printf("\nN�mero inv�lido!\n\n");
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
