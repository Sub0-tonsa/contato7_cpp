/*
	Name: par_impar.cpp
	Author: Giovanni Tonsa
	Date: 07/10/25 11:31
	Description: Programa
*/

# include <stdio.h>

main()
{
	int num, cont, par;
	float impar;
	
	num = cont = par = 0;
	impar = 0.0;
	
	do 
	{
		printf("Digite um numero par ou impar: ");
		scanf("%d", &num);
		if (num % 2 == 0)
		{
			printf("O numero e par %d\n", num);
			par = num + 2;
			printf("E a soma deu: %d\n", par);
		}
		else
		{
			printf("O numero e impar %d\n", num);
			impar = (float)num / 3;	
			printf("E a divisao deu: %.2f\n", impar);
		}
		cont++;
	} while(cont < 5);
	
}// fim do programa
