// Projeto de Desenvolvimento de Algoritmos do segundo semestre de 2021
// Nome: Vitor Dinis Watanabe
// R.A.: 11.219.035-0

#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <math.h>
#include <time.h>

// constante para facilitar os testes
#define QTD 10

// funcao que apresenta o menu de nivel de dificuldade
// e prenche a variavel passada com a escolha do usuario
void EscolherNivelDificuldade(int *dificuldade)
{
	printf("Escolha a dificuldade:\n");
	printf("1 - Numeros de um digito\n");
	printf("2 - Numeros de ate dois digitos\n");
	printf("3 - Numeros de ate tres digitos\n");
	printf("4 - Numeros de ate quatro digitos\n");
	printf("5 - Numeros de ate cinco digitos\n");
	printf("6 - Numeros de ate seis digitos\n");
	printf("7 - Numeros de ate sete digitos\n");
	printf("0 - Sair\n");
	scanf("%i", dificuldade);	
}

// apresenta o menu para o usuario escolher o tipo de problema
void ApresentarMenuProblema(int *problema)
{
	printf("Escolha a tipo de problema:\n");
	printf("1 - Apenas problemas de adicaoo\n");
	printf("2 - Apenas problemas de subtracaoo\n");
	printf("3 - Apenas problemas de multiplicacao\n");
	printf("4 - Apenas problemas de divisao\n");
	printf("5 - Mistura aleataria de todos os tipos\n");
	scanf("%i", problema);
}

// mostra a pergunta para o usuario, conforme numeros
// e operacao passada e retorno a resposta dada
float ObterResposta(int n1, int n2, int operacao)
{
	float resposta;
	
	printf("Quanto e %i ", n1);
	if(operacao==1)
		printf("somado a");
	else if(operacao==2)
		printf("subtraido por");
	else if(operacao==3)
		printf("multiplicado por");
	else 
		printf("dividido por");
	printf(" %i? ", n2);
	
	scanf("%f", &resposta);
	return resposta;
}

// retorna um texto aleatario indicando um erro
char* ObterRespostaErrada()
{
	int sorte = (rand() % 4); // sorteia um numero
	switch(sorte)
	{
		case 0:
			return "Nao. Por favor, tente novamente.";
			break;
		case 1:
			return "Errado. Tente mais uma vez.";
			break;
		case 2:
			return "Nao desista!";
			break;
		default:
			return "Nao. Continue tentando.";
			break;
	}
}


// retorna um texto aleatorio indicando um acerto
char* ObterRespostaCerta()
{
	int sorte = (rand() % 4); // sorteia um numero
	switch(sorte)
	{
		case 0:
			return "Muito bem!";
			break;
		case 1:
			return "Excelente!";
			break;
		case 2:
			return "Bom trabalho!";
			break;
		default:
			return "Mantenha o bom trabalho!";
			break;
	}
}

// funcao que recebe a dificuldade, o tipo de problema, faz o sorteio dos numeros, 
// calcula a resposta correta, obtem a resposta do usuario e retorno se ele acertou ou nao.
// recebe 5 variaveis por referencia para devoltar estes valores sorteados, calculados e obtidos
int FazerOperacaoAritmetica(int dificuldade, int problema,  int *n1, int *n2, int *operacao, float *respcerta, float *respdada)
{

	int sorteado1, sorteado2, limite, operacaosort;
	float respostacerta, resposta;

	// dependendo da dificuldade, seta o valor maximo que sere sorteado
	if (dificuldade==1)
		limite = 10;
	else if (dificuldade==2)
		limite = 100;
	else if (dificuldade==3)
		limite = 1000;
	else if (dificuldade==4)
		limite = 10000;
	else if (dificuldade==5)
		limite = 100000;
	else if (dificuldade==6)
		limite = 1000000;
	else if (dificuldade==7)
		limite = 10000000;
	
	sorteado1 = (rand() % limite); // sorteia um numero entre 0 e limite - 1
	sorteado2 = (rand() % limite); // sorteia um numero entre 0 e limite - 1
		
	switch(problema)
	{
		case 1:
			respostacerta = sorteado1 + sorteado2; // soma: calculo da resposta correta
			break;
			
		case 2:
			respostacerta = sorteado1 - sorteado2; // subtracao: calculo da resposta correta
			break;
			
		case 3:
			respostacerta = sorteado1 * sorteado2; // multiplicacao: calculo da resposta correta
			break;
			
		case 4:
			if (sorteado2==0) sorteado2 = 1; // nao permite denominador zero
			
			 // divisao: calculo da resposta correta
			respostacerta = (sorteado1 * 1.0) / (sorteado2 * 1.0);

			// truncar resposta para uma casa decimal
			respostacerta = trunc(respostacerta*10); // multiplica por 10, e pega a parte inteira
			respostacerta = respostacerta / 10.0; // divide por 10 para ficar com 1 casa decimal valida

			break;
			
		case 5: // aletorio
		
			// sorteia a operacao (de 1 a 4)
			operacaosort = (rand() % 4)+1;
			
			// calculo da resposta correta, dependendo da operacao
			if (operacaosort==1)
				respostacerta = sorteado1 + sorteado2; // soma
			else if (operacaosort==2)
				respostacerta = sorteado1 - sorteado2; // subtracao
			else if (operacaosort==3)
				respostacerta = sorteado1 * sorteado2; // multiplicacao
			else if (operacaosort==4)
			{
				// divisao
				
				if (sorteado2==0) sorteado2 = 1; // nao permite denominador zero
				
				respostacerta = (sorteado1 * 1.0) / (sorteado2 * 1.0);
				
				// truncar resposta para uma casa decimal
				respostacerta = trunc(respostacerta*10); // multiplica por 10, e pega a parte inteira
				respostacerta = respostacerta / 10.0; // divide por 10 para ficar com 1 casa decimal valida
			}
			break;
	}
	
	// obter a resposta do usuario, com base nos numeros sorteados e operacao
	if (problema>=1 && problema <=4)
	{
		resposta = ObterResposta(sorteado1, sorteado2, problema);
		*operacao = problema;
	}
	else
	{
		resposta = ObterResposta(sorteado1, sorteado2, operacaosort);
		*operacao = operacaosort;
	}
	
	*n1 = sorteado1; // para ser usado por quem precisar (de fora da funcao)
	*n2 = sorteado2; 
	*respcerta = respostacerta;
	*respdada = resposta;  // para ser usado por quem precisar (de fora da funcao)
	
	return resposta == respostacerta; // retorna o resultado da comparacao
}

// funcao que "converte" o valor inteiro em um char que representa o simbolo da operacao
char obterSimboloOperacao(int op)
{
	switch(op)
	{
		case 1: // soma
			return '+';
			break;
		case 2: // subtracao
			return '-';
			break;
		case 3: // multiplicacao
			return '*';
			break;
		case 4: // divisao
			return '/';
			break;
		default:
			return '.';
			break;
	}
}

int main()
{
	setlocale(LC_ALL,"");
	
	// inicializa a aleatoriedade
	srand(time(NULL));
	
	// vetores para guardar as tentativas do usuario e depois
	// apresentar um relatorio do desempenho
	int sorteados1[QTD], sorteados2[QTD], operacoes[QTD], resultados[QTD];
	float respostascerta[QTD], respostasdadas[QTD];
	
	// variaveis auxiliares para controlar o fluxo do programa
	int i, cacerto, resultado, dificuldade = -1, problema, n1, n2, operacao;
	float respcerta, respdada, peracertos;

	// A opcao 0 na dificuldade indica que o usuario quer sair do programa
	while(dificuldade!=0)
	{
		cacerto = 0; // zera o contador de acertos para uma nova tentativa
		
		// obter a dificuldade desejada
		EscolherNivelDificuldade(&dificuldade);
		printf("\n");

		// se for uma dificuldade valida
		if (dificuldade>=0 && dificuldade<=7)
		{

			if (dificuldade!=0) // se o usuario nao deseja sair
			{
		
				// apresenta o meu para escolher o tipo de problema desejado
				ApresentarMenuProblema(&problema);
				printf("\n");
		
				// se for um tipo de problema valido
				if (problema>=1 && problema<=5)
				{
					
					// loop para fazer a quantidade de perguntas solicitadas
					for(i=0;i<QTD;i++)
					{
						// construir a pergunta e obter o resultado do desafio
						// as passagens por referencia aqui, servem para poder ter acesso aos dados
						// que a funcao usou para fazer a pergunta ao usuario
						resultado = FazerOperacaoAritmetica(dificuldade, problema, &n1, &n2, &operacao, &respcerta, &respdada);
						
						// guarda os dados da pergunta nos vetores
						sorteados1[i] = n1;
						sorteados2[i] = n2;
						operacoes[i] = operacao;
						respostascerta[i] = respcerta;
						respostasdadas[i] = respdada;
						resultados[i] = resultado;
							
						// avalia o resultado e apresenta a mensagem de retorno
						if (resultado)
						{
							printf("%s\n\n", ObterRespostaCerta());
							cacerto++;
						}
						else
							printf("%s\n\n", ObterRespostaErrada());
					}
		
					// relatorio do desempenho apos todas as perguntas serem respondidas
					printf("Calculo\t\tResultado Esperado\t\tResposta\t\tDada Correto?\n");					
					for(i=0;i<QTD;i++)
					{
						printf("%i %c %i\t\t\t", sorteados1[i], obterSimboloOperacao(operacoes[i]), sorteados2[i]);
						if (operacoes[i]==4)
						{
							printf("%.1f\t\t\t", respostascerta[i]);
							printf("%.1f\t\t\t", respostasdadas[i]);
						}
						else
						{
							printf("%.0f\t\t\t", respostascerta[i]);
							printf("%.0f\t\t\t", respostasdadas[i]);
						}
						if (resultados[i])
							printf("Sim\n");
						else
							printf("Nao\n");
					}
					
					// calculo do percentual de acertos em relacao ao total de perguntas feitas
					peracertos = cacerto *1.0 / QTD * 100.0;
					
					// mensagem conforme o resultado
					if (peracertos<70)
						printf("%.2f%% de acerto. Peca ajuda extra ao seu professor", peracertos);
					else
						printf("%.2f%% de acerto. Parabens, voce esta pronto para ir para o proximo nivel!", peracertos);
					
					getchar(); // limpar buffer
					printf("\n\nPressione <ENTER> para recome�ar\n");
					getchar();
				}
				else
				{
					printf("Opcao invalida!\n\n");
				}
			}
		}
		else
		{
			printf("Opcao invalida!\n\n");
		}
	}
	
	return 0;
}
