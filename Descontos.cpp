#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

	main()
{//começo	
		float total,  preco, valor;
		setlocale(LC_ALL,"Portuguese");
		printf("\n\n\tEste programa le uma serie de valores correspondente aos preços das mercadorias");
		getch();
		system("cls");
		total = 0;
		
		do
		
		{
			printf("\n\n\tEntre com os valores: ");
			scanf("%f",&preco);
			total = preco + total;
		}
			while(preco!=0);	
			if(total<50)
			{
				valor = total * 0.95;
			}	
			else if (total >=50 &&total <=100)
			{
				valor = total * 0.90;
			}
			else if (total >100 &&total <=200)
			{
				valor = total * 0.85;
			}
			else 
			{
				valor = total * 0.80;
			}
			
		printf("\n\t\tO valor a ser pago: %.2f", valor);
}//fim

