#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>//necess�rio p/ fun��o time()
#include <windows.h>// necess�rio para utilizar a fun��o Sleep()
#include <locale.h> //necess�rio para usar acentos
#include <conio.h>
#include <math.h>
	
main()
{
	setlocale(LC_ALL,"portuguese");
	char continuar = 's';
	int dado1, dado2, dado3, dado4, dado5, dado6, soma
	
		printf("\n\n\n\t\t\t\tBem vindo ao jogo de dados !");
		printf("\n\n\t\t\t As regras desse jogo s�o:");
		printf("\n\nO ganhador ser� definido de acordo com os n�meros obtidos ap�s jogar dois dados.");
		printf("\nPor exemplo, se o resultado do lan�amento inicial for 7 ou 11, o vencedor � o jogador, e o jogo termina.");
		printf("\nJ� quando o lan�amento inicial resulta em 2 ou 3, quem ganha � o computador, e o jogo termina.");
		printf("\nH� ainda a possibilidade de que o lan�amento inicial seja 4, 5, 6, 8, 9, 10 ou 12.");
		printf("\nNesses casos, o n�mero espec�fico que foi obtido com a jogada dos dados, se torna o chamado \"ponto do jogador\".") ;
		printf("\nA partir de agora o jogador e o computador devem jogas os dados alternadamente,");
		printf("\nat� que um dos dois atinjam o \"ponto do jogador\", ou o numero 7.");
		printf("\nCaso o n�mero seja o \"ponto do jogador\" , quem ganha � quem acertou .") ;
		printf("\nCaso seja 7 quem ganha � o computador.");
		
		
		printf("\n\n\t\tdeseja continuar ? Sim(s) N�o(n):");
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
