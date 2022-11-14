#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nomeProfessor[30], nomeAluno[30], sexo, titulacao, cpf[15], plano[10], confirmacao;
	int idade, matriculaGerada, telefone, opcao, frequenciaAluno=0, contador, treinos=1;
	srand(time(NULL));

	printf("Digite o numero para a opcao desejada:\n1. Cadastrar professor\n2. Cadastrar aluno\n");
	printf("Opcao: ");
	scanf("%d", &opcao);

	switch(opcao) {
		case 1:
			printf("Digite o nome do professor: ");
			scanf(" %[^\n]s", &nomeProfessor);

			printf("Informe o sexo: ");
			scanf(" %c", &sexo);

			printf("Digite o telefone: ");
			scanf("%d", &telefone);

			printf("Informe a idade: ");
			scanf("%d", &idade);

			printf("Informe a titulacao: ");
			scanf("%s", &titulacao);

			matriculaGerada = (rand() % 999999) + 100000;
			printf("A matricula gerada foi: %d\n", matriculaGerada);
			
			break;

		case 2:
			printf("Digite o nome do aluno: ");
			scanf(" %[^\n]s", &nomeAluno);

			printf("Informe o sexo: ");
			scanf(" %c", &sexo);

			printf("Informe o cpf: ");
			scanf("%s", &cpf);

			printf("Informe o telefone: ");
			scanf("%d", &telefone);

			printf("*Plano A: Frango\n");
			printf("*Plano B: Maromba\n");
			printf("Escolha o plano: ");
			scanf("%s", &plano);

			matriculaGerada = (rand() % 999999) + 100000;
			printf("A matricula gerada foi: %d\n", matriculaGerada);

			printf("\n|----------------------------------------|\n");
			printf("|----------Frequencia do Aluno-----------|\n");
			printf("|----------------------------------------|\n");
			
			for(contador=1; contador <=30; contador++){
				switch (treinos) {
					case 1:
						printf("\n|----------------------------------------|\n");
						printf("|-----Segunda-feira: treino de pernas----|\n");
						printf("|----------------------------------------|");
						printf("\nCadeira extensora\nLeg Press\nAgachamento Livre\n");
						break;
						
					case 2:
						printf("\n|-------------------------------------------------------|\n");
						printf("|-----Terca-feira: treino de biceps, costas e ombro-----|\n");
						printf("|-------------------------------------------------------|");
						printf("\nRosca direta com barra\nElevacao frontal com halteres\nRemada\n");
						break;
						
					case 3:
						printf("\n|--------------------------------------------------|\n");
						printf("|-----Quarta-feira: treino de abdomen e cardio-----|\n");
						printf("|--------------------------------------------------|");
						printf("\nEliptico\nAbdominal Remador\nPrancha Vertical\n");
						break;
						
					case 4:
						printf("\n|----------------------------------------|\n");
						printf("|-----Quinta-feira: treino de pernas-----|\n");
						printf("|----------------------------------------|");
						printf("\nCadeira Flexora\nCadeira Abdutora\nAvanco\n");
						break;
						
					case 5:
						printf("\n|------------------------------------------------|\n");
						printf("|-----Sexta-feira: treino de peito e triceps-----|\n");
						printf("|------------------------------------------------|");
						printf("\nSupino Reto\nTriceps Corda\nTriceps invertida\n");
						break;		
						
					}
					
					if(treinos>=1 && treinos<=5){
						printf("*Compareceu ao treino?\nDigite S para SIM e N para NAO\n ");
						scanf(" %c", &confirmacao);
						if(confirmacao=='S'){
							frequenciaAluno++;
						}
					}
					
					if(treinos==7){
						treinos=0;
						
					}
					treinos++;
					
			}
			printf("Frequencia: %d\n", frequenciaAluno);
	}
}