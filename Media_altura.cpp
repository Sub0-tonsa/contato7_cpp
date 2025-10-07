/*
	Name: Media_altura.cpp
	Author: Giovanni Tonsa
	Date: 07/10/25 09:34
	Description: Programa para ler idades de 7 pessoas e calcular a média entre elas
*/

# include <stdio.h>

main()
{
	int idade, somaIdades, cont;
	float media;
	
	idade = somaIdades = cont =  0;
	media = 0.0;
	
	puts("Programa para calcular as idades e fazer a media");
	puts("================================================");
	
	do
	{
		printf("Digite idade: ");
		scanf("%d", &idade);
		somaIdades = somaIdades + idade;
		cont++;
	}while(cont < 7);
	
	media = (float)somaIdades / cont; //pegando o valor real da divisão
	
	printf("A media das idades e: %.3f", media);
}// fim do programa

