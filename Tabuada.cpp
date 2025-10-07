/*
	Name: Tabuada.cpp
	Author: Giovanni Tonsa
	Date: 07/10/25 10:30
	Description: Programa para exibir a tabuada de multiplicação
*/

# include <stdio.h>

main()
{
	int num, i;	
	num = i = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i = 0; i <= 10; i++)
		printf("\n%d X %d = %d",num , i, num*i);
}//fim do programa

