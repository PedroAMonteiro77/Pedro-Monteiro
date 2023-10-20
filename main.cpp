#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()
#include <windows.h>// necessário para utilizar a função Sleep()
#include <locale.h> //necessário para usar acentos
#include <conio.h>
#include <math.h>
	
main()
{
	setlocale(LC_ALL,"portuguese");
	char continuar = 's';
	int dado1, dado2, dado3, dado4, dado5, dado6, soma
	
		printf("\n\n\n\t\t\t\tBem vindo ao jogo de dados !");
		printf("\n\n\t\t\t As regras desse jogo são:");
		printf("\n\nO ganhador será definido de acordo com os números obtidos após jogar dois dados.");
		printf("\nPor exemplo, se o resultado do lançamento inicial for 7 ou 11, o vencedor é o jogador, e o jogo termina.");
		printf("\nJá quando o lançamento inicial resulta em 2 ou 3, quem ganha é o computador, e o jogo termina.");
		printf("\nHá ainda a possibilidade de que o lançamento inicial seja 4, 5, 6, 8, 9, 10 ou 12.");
		printf("\nNesses casos, o número específico que foi obtido com a jogada dos dados, se torna o chamado \"ponto do jogador\".") ;
		printf("\nA partir de agora o jogador e o computador devem jogas os dados alternadamente,");
		printf("\naté que um dos dois atinjam o \"ponto do jogador\", ou o numero 7.");
		printf("\nCaso o número seja o \"ponto do jogador\" , quem ganha é quem acertou .") ;
		printf("\nCaso seja 7 quem ganha é o computador.");
		
		
		printf("\n\n\t\tdeseja continuar ? Sim(s) Não(n):");
		scanf("%s", &continuar);
		if(continuar == 's')
		{
			system("cls")
			for (int i = 0; i < 6; i++)
			{
				dado1("%d ", rand() %6+1);
				dado2("%d" , rand() %6+1);
			}
		}
		else
		{
			system("cls ")
		}
	
}
