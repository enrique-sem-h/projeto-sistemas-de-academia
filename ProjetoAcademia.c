#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

typedef struct{
	char nomeProfessor[30], sexo, telefone[15], titulacao[15];
	int idade, matriculaGerada;

} funcionario;

typedef struct{
	char nomeAluno[30], sexo, cpf[15], telefone[15], plano[10];
	int matriculaGerada, frequenciaAluno;

} aluno;


int main() {
	setlocale(LC_ALL, "Portuguese");
	char nomeAluno[30], sexo, cpf[15], plano[10], confirmacao, telefone, a = 'R', b = 'e', c = 'e';
	int idade, matriculaGerada, opcao, frequenciaAluno=0, contador, treinos=1, i = 0, j, x, iA = 0, jA, xA;
	funcionario func[10];
	aluno aluno[10];
	aluno->frequenciaAluno = 0;
	srand(time(NULL));

	do{
	printf("\nDigite o numero para a opcao desejada:\n1. Cadastrar funcionário\n2. Cadastrar aluno\n3. Consultar funcionários\n4. Consultar alunos\n");
	printf("Opcao: ");
	scanf("%d", &opcao);

	switch(opcao) {
		case 1:
			do{
			printf("Digite o nome do funcionário: ");
			scanf(" %[^\n]s", &func[i].nomeProfessor);
			//scanf(" %[^\n]s", &nomeProfessor);

			printf("Informe o sexo: ");
			scanf(" %c", &func[i].sexo);
			//scanf(" %c", &sexo);

			fflush(stdin);
			printf("Digite o telefone: ");
			scanf(" %[^\n]s", &func[i].telefone);
			fflush(stdin);
			//scanf(" %[^\n]s", &telefone);

			printf("Informe a idade: ");
			scanf("%d", &func[i].idade);
			//scanf("%d", &idade);

			printf("Informe a titulação: ");
			fflush(stdin);
			scanf(" %[^\n]s", &func[i].titulacao);
			//scanf(" %s", &titulacao);
			
			func[i].matriculaGerada = (rand() % 999999) + 100000;
			printf("A matrícula gerada foi: %d\n", func[i].matriculaGerada);
			
			i++;
			printf("Digite S para parar o cadastro ou R para fazer outro\n");
			scanf(" %c", &b);
			}while(b != 'S' && b != 's');
			
			break;

		case 2:
			do{
			printf("Digite o nome do aluno: ");
			scanf(" %[^\n]s", &aluno[iA].nomeAluno);

			printf("Informe o sexo: ");
			scanf(" %c", &aluno[iA].sexo);

			printf("Informe o CPF: ");
			scanf("%s", &aluno[iA].cpf);

			printf("Informe o telefone: ");
			scanf(" %[^\n]s", &aluno[iA].telefone);

			printf("*Plano A: Frango\n");
			printf("*Plano B: Maromba\n");
			printf("Escolha o plano: ");
			scanf("%s", &aluno[iA].plano);

			aluno[iA].matriculaGerada = (rand() % 999999) + 100000;
			printf("A matrícula gerada foi: %d\n", aluno[iA].matriculaGerada);

			printf("\n|----------------------------------------|\n");
			printf("|----------Frequência do Aluno-----------|\n");
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
						printf("|-----Terca-feira: treino de bíceps, costas e ombro-----|\n");
						printf("|-------------------------------------------------------|");
						printf("\nRosca direta com barra\nElevacao frontal com halteres\nRemada\n");
						break;
						
					case 3:
						printf("\n|--------------------------------------------------|\n");
						printf("|-----Quarta-feira: treino de abdômen e cardio-----|\n");
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
						printf("|-----Sexta-feira: treino de peito e tríceps-----|\n");
						printf("|------------------------------------------------|");
						printf("\nSupino Reto\nTriceps Corda\nTriceps invertida\n");
						break;		
						
					}
					
					if(treinos>=1 && treinos<=5){
						printf("*Compareceu ao treino?\nDigite S para SIM e N para NAO\n ");
						scanf(" %c", &confirmacao);
						if(confirmacao=='S' || confirmacao == 's'){
							aluno[iA].frequenciaAluno++;
						}
					}
					
					if(treinos==7){
						treinos=0;
						
					}
					treinos++;
					
			}
			printf("Frequência: %d\n", aluno[iA].frequenciaAluno);
			
			iA++;
			printf("Digite S para parar o cadastro ou R para fazer outro\n");
			scanf(" %c", &c);
			}while(c != 'S' && c != 's');
			break;

		case 3:
			j = i;
			j--;
			printf("\n\tConsulta de funcionários\n");
			if(j == -1)
				printf("Erro, nenhum funcionário registrado\n");
			else{
			printf("Digite o num. do funcionario\n");

			for(x = 0; x <= j; x++){
				printf("%d. %s\n", x, func[x].nomeProfessor);
			}
			scanf("%d", &x);

			printf("\nNome: %s\nSexo: %c\nTelefone: %s\nIdade: %d\nTitulação: %s\nMatrícula: %d\n", func[x].nomeProfessor, func[x].sexo, func[x].telefone, func[x].idade, func[x].titulacao, func[x].matriculaGerada);
			}

			printf("Digite R para voltar para o menu principal ou E para encerrar o programa!\n");
			scanf(" %c", &a);
			break;		

		case 4:
			jA = iA;
			jA--;
			printf("\n\tConsulta de Alunos\n");
			if(jA == -1)
				printf("Erro, nenhum aluno registrado\n");
			else{
			printf("Digite o num. do aluno\n");

			for(xA = 0; xA <= jA; xA++){
				printf("%d. %s\n", xA, aluno[xA].nomeAluno);
			}
			scanf("%d", &xA);

			printf("\nNome: %s\nSexo: %c\nCPF: %s\nTelefone: %s\nPlano: %s\nMatrícula: %d\nFrequência: %d\n", aluno[xA].nomeAluno, aluno[xA].sexo, aluno[xA].cpf, aluno[xA].telefone, aluno[xA].plano, aluno[xA].matriculaGerada, aluno[xA].frequenciaAluno);
			}

			printf("Digite R para voltar para o menu principal ou E para encerrar o programa!\n");
			scanf(" %c", &a);
			break;

		default:
			printf("Opcao invalida\n");
			break;
	}
	}while(a == 'R' || a == 'r');
}