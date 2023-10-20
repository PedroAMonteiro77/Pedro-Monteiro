#include <stdio.h>//declarações de funções úteis para entrada e saída de dados
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()
#include <windows.h>// necessário para utilizar a função Sleep()
#include <locale.h> //necessário para usar acentos

void dado(int dados) //retorna a função atribuindo outro valor 
{//começo void
	if(dados==1)//printar os dados na tela 
	{
		printf("\n\t\t _______ ");
		printf("\n\t\t|       |");      
        printf("\n\t\t|   *   |");       
        printf("\n\t\t|       |");        
        printf("\n\t\t ------- ");       
	}
	else if(dados==2)
	{
		printf("\n\t\t _______ ");
		printf("\n\t\t|*      |");      
        printf("\n\t\t|       |");       
        printf("\n\t\t|      *|");        
        printf("\n\t \t------- ");
	}
	else if(dados==3)
	{
		printf("\n\t\t _______ ");
		printf("\n\t\t|*      |");      
        printf("\n\t\t|   *   |");       
        printf("\n\t\t|      *|");        
        printf("\n\t\t ------- ");
	}
	else if(dados==4)
	{
		printf("\n\t\t _______ ");
		printf("\n\t\t|*     *|");      
        printf("\n\t\t|       |");       
        printf("\n\t\t|*     *|");        
        printf("\n\t\t ------- ");
	}
	else if(dados==5)
	{
		printf("\n\t\t _______ ");
		printf("\n\t\t|*     *|");      
        printf("\n\t\t|   *   |");       
        printf("\n\t\t|*     *|");        
        printf("\n\t\t ------- ");
	}
	else
	{
		printf("\n\t\t _______ ");
		printf("\n\t\t|*     *|");      
        printf("\n\t\t|*     *|");       
        printf("\n\t\t|*     *|");        
        printf("\n\t\t ------- ");
	}
	
}//fim void
	main()
	{//começo main
		setlocale(LC_ALL,"Portuguese");//portugues
  		char continuar ='s';//continuar
  		
  		char B ='s';// armazenar o valor inteiro de um membro do conjunto de caracteres representável
  		int VetorJ[2], VetorPC[2], soma, ponto, soma1, somaPC, p;//declaração de variaveis
  		
 		srand(time(NULL));//escolher um numero aleatorio
 
		printf("\n\n\t\t\tBem vindo ao jogo de dados !");//prit de saida na tela 
		printf("\n\n\t\tAs regras desse jogo são:");
		printf("\n\n\tO ganhador será definido de acordo com os números obtidos após jogar dois dados.");
		printf("\n\tPor exemplo, se o resultado do lançamento inicial for 7 ou 11, o vencedor é o jogador, e o jogo termina.");
		printf("\n\tJá quando o lançamento inicial resulta em 2 ou 3, quem ganha é o computador, e o jogo termina.");
		printf("\n\tHá ainda a possibilidade de que o lançamento inicial seja 4, 5, 6, 8, 9, 10 ou 12.");
		printf("\n\tA partir de agora o jogador e o computador devem jogas os dados alternadamente,");
		printf("\n\taté que um dos dois atinjam o \"ponto do jogador\", ou o numero 7.");
		printf("\n\tCaso o número seja o \"ponto do jogador\", quem ganha é quem acertou .");
		printf("\n\tCaso seja 7 quem ganha é o computador.");
	
		printf("\n\n\t\tDeseja jogar ? Sim(s) Não(n): ");
		scanf("%s", &continuar);
   
   		if(continuar=='s')//se continuar = a s 
  		{//começo do if1
  			
	  			while(B == 's')//repetiçõ cso B seja s
	  		{//começo do while1
	  			char A ='a';
				p = 0;//numero de jogadas
	  			system("cls");//cleaar
	  			for(int i=0;i<2;i++)//maximo de jogada de dados 
	  			{
	  				VetorJ[i]=rand()%6+1;//rand é o numeor aleatorio de 1 a 6
				}
				
				soma=VetorJ[0] + VetorJ[1];//soma dos valores sorteados no ddo
			
				if(soma==7 || soma==11)//caso a soma seja 7 ou 11
				{
					printf("\n\tO número sorteado foi %d", soma);
					
					dado(VetorJ[0]);
					dado(VetorJ[1]);
					
					
					printf("\n\t\t\t\t\tVOCÊ GANHOU !!!!");
				}
				else if(soma==2 || soma==3)//caso seja 2 ou 3 
				{
					printf("\t\tO número sorteado foi %d", soma);
					
					dado(VetorJ[0]);
					dado(VetorJ[1]);
					
					
					printf("\n\t\t\t\t\tVOCÊ PERDEU !!!!");
				}
				else//se nao for nenhuma dessas 
				{
					for(int c=4;c>0;c=c-1)//contagem regressiva
					{
					
					
						printf("\n\t\tO número sorteado foi %d", soma);
						
						dado(VetorJ[0]);
						dado(VetorJ[1]);
						
						printf("\nNovo sorteio em %ds", c);
						Sleep(1000);
						system("cls");
				
					}
					
					for(int i=0;i<2;i++)//sortei de apenas 2 numeros
	  				{
	  					VetorJ[i]=rand()%6+1;//sorteio 
					}
				
				ponto=VetorJ[0] + VetorJ[1];//novo numero para ganhar 
				
				do//repetição do programa apenas 1 vez ate atingir o que foi pedido // caso nao seja nem 2, 3, 7 ou 11
				{
					
					
					for(int i=0;i<2;i++)//sorteio de apenas 2 numeros
		  				{
		  					VetorJ[i]=rand()%6+1;//sorteio do jogador
		  					VetorPC[i]=rand()%6+1;//sorteio da maquina 
						}
					soma1=VetorJ[0] + VetorJ[1];//soma dos vaores 
					somaPC=VetorPC[0] + VetorPC[1];
					
					for(int c=6;c>0;c=c-1)//contagem regressiva
					{
						printf("\n\tjogada n: %d", p+1);
						
						printf("\n\n\t\t\t\tO ponto do jogador é: %d", soma);
						
						
						printf("\n\t\tO número sorteado foi %d",soma1);
						
						dado(VetorJ[0]);
						dado(VetorJ[1]);
						
						printf("\n\t\tO número sorteado foi %d", somaPC);
						
						dado(VetorPC[0]);
						dado(VetorPC[1]);
						
					
						if(somaPC==7)//se aa soma for 7
						{
							printf("\n\t\t\t\t\tO computdor tirou um 7.");
							printf("\n\n\t\t\t\tVOCÊ PERDEU !!!!");
							A = 'b';//se isso acontecer A atribui o valor de b
						}
						
						else if(soma1==7)
						{
							printf("\n\t\t\t\t\tVocê tirou um 7.");
							printf("\n\n\t\t\t\t\tVOCÊ PERDEU !!!!");
							A = 'b';//se isso acontecer A atribui o valor de b
						}
						
						else if(soma1==soma)
						{
							printf("\n\t\t\t\t\tVocê tirou um %d.", soma);
							printf("\n\n\t\t\t\t\tVOCÊ GANHOU !!!!");
							A = 'b';//se isso acontecer A atribui o valor de b
						}
						
						else if(somaPC == soma)
						{
							printf("\n\t\t\t\t\tO computador tirou um %d.", soma);
							printf("\n\n\t\t\t\t\tVOCÊ PERDEU !!!!");
							A = 'b';//se isso acontecer A atribui o valor de b
						}
						if(A == 'b')// Quando A atribuir o valor de b o programa acaaba 
						{
							break;//parar de repetir quando for atingido oq for pedido
						}
							printf("\nNovo sorteio em %ds", c);//print da contagem regressiva
							Sleep(1000);
							
							system("cls");
							
						
					}
					p=p+1;//soma 1 ao numero de jogadas
				}
				while(A == 'a');//vai continuar enquanto A for igual a a
			
					
					
					
				
				}
			printf("\n\n\tDeseja continuar? Sim(s) Não(n) ");
            scanf("%s",&B);
			}//fim do while1
				
			
		
		} //fim do if
	}//fim main

