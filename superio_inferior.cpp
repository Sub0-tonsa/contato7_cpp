/*
	Name:  superio_inferior.cpp
	Author: Giovanni Tonsa
	Date: 07/10/25 12:07
	Description: Programa que le um limite de um numero e conta de forma regressiva do superior ao inferior 
*/

# include <stdio.h>

main()
{
	int limiteinf, limitesup, cont;
	limiteinf = limitesup = cont = 0;
	
	printf("Digite o limite superior da contagem: ");
	scanf("%d", &limitesup);
	printf("Digite o limite inferior da contagem: ");
	scanf("%d", &limiteinf);
	
	for (cont = limitesup; cont >= limiteinf; --cont)
	{
		printf("\n%d", cont);
	}
}//fim do programa

