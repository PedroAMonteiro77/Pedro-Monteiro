#include <stdio.h>//Funções de entrada e saida 
#include <locale.h>// Ulizar acenots
#include <stdlib.h>//limpar tela 
#include <conio.h>//Para utilizar o getch

	main()
	{
		continuar = 's';
		setlocale(LC_ALL,"portuguese");
		printf("\n\n\t\tEste programa faz uma tabuada");
		while(continuar=='s'|| continuar=='s')
		{
			system("cls");//limpa tela
			printf("\n\n\tValor do primeiro numero");
			scanf("%d",a);
			printf("\n\n\tValor do segundo numero");
			scanf("%d",b);
			printf("\n\n\tDeseja continuar? s(sim) n(nao):");
			scanf("%s",&continuar);
			
			if(a<b);
			{
				for(int i=1;i<=10;i=i+1)
			}
		}
			
	}


