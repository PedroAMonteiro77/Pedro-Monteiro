#include <stdio.h>// Funções de entrada e saida 
#include <locale.h>// Ulizar acentos
#include <stdlib.h>// limpar tela 

	main()
	{// Começo
		setlocale(LC_ALL,"Portuguese");// Acentos 
		printf("\n\n\n\t\t\tResovendo equaçôess lineares por regra de Cramer");// Fala inicial
		getchar();// Variavel tipo char
		char continuar='s';// Caracteres
		float X , Y , d , Dx, Dy ,A , B , C , D , E , F;// Declarações de variaveis 
		while(continuar=='s'||continuar== 'S')//== Enquanto // Nao colocar ;
		{// While começo
			system("cls");// Clear
			printf("\n\t\t\t\t\tAx+By=C");// Ax + By = C
			printf("\n\t\t\t\t\tDx+Ey=F");// Dx + Ey = F
			printf("\n\n\tEntre com os valores de A, B, e C com espaço entre eles: ");// Colocar os valores de A B C
			scanf("%f %f %f", &A, &B, &C);// Ler os valores
			printf("\n\n\tEntre com os valores de D, E, e F com espaço entre eles: ");// Colocar os valores de D E F
			scanf("%f %f %f", &D, &E, &F);// Ler os valores
			system("cls");// Clear
			
			printf("\n\n\tA matriz principal:");
			printf("\n\t%.2f\t%.2f", A, B);// 2.f = dois numeros depois da virgula // criando a matriz 
			printf("\n\t%.2f\t%.2f", D, E);// 2.f = dois numeros depois da virgula // criando a matriz 
			d = (A * E) - (B*D);// Calculo da determinante 
			printf("\n\t\t\tO determinante da matriz principal é: %.2f", d);// Valor da determinante
			
			printf("\n\n\tMatriz X:");
			printf("\n\t%.2f\t%.2f", C, B);// 2.f = dois numeros depois da virgula // criando a matriz 
            printf("\n\t%.2f\t%.2f", F, E);// 2.f = dois numeros depois da virgula // criando a matriz 
            Dx = (C*E) - (B*F);// Calculo da determinante 
            printf("\n\t\t\tO determinante da matriz X: %.2f", d);// Valor da determinante 
            
            printf("\n\n\tMatriz y:");
			printf("\n\t%.2f\t%.2f", A, C);// 2.f = dois numeros depois da virgula
			printf("\n\t%.2f\t%.2f", D, F);
			Dy = (A*F) - (C*D);// Calculo da determinante 
			printf("\n\t\t\tO determinante da matriz Y: %.2f", d);// Valor da determinante
			
			X = Dx/d;// Calculo do X
			Y = Dy/d;// Calculo do Y
			
			printf("\n\n\tO valor de x e: %.2f", X );// Valor de X
			printf("\n\tO valor de Y e: %.2f", Y);// Valor de Y
			
			printf("\n\n\t\tDeseja continuar? Sim(s) Não(n)");// Continuar ou nao 
			scanf("%s",&continuar);//atribuir um valor 
            
			
		}// while fim
	}// fim
