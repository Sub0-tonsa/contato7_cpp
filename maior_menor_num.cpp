/*
	Name: maior_menor_num.cpp
	Author: Giovanni Tonsa
	Date: 07/10/25 10:45
	Description: Programa que le 10 numeros e informa qual é maior e o menor
*/

# include <stdio.h>

main()
{
	float num, maior, menor;
	int i;
	i = 0;
	num = maior = menor = 0.0;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	maior = num;
	menor = num;
	
	while (i < 9)
	{
		printf("Digite um numero: ");
		scanf("%f", &num);
		
		if (num > maior)
			maior = num;
		if (num < menor)
			menor = num;
	i++;
	}// fim do while
	
	printf("O maior numero e: %.2f\n", maior);
	printf("O menor numero e: %.2f\n", menor);
	
}// fim do programa

