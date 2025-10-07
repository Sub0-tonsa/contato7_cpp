/*
	Name: Casados_solteiros.cpp
	Author: Giovanni Tonsa
	Date: 07/10/25 09:54
	Description: Programa para ler e contabilizar homens e mulheres, solteiros e casados
*/

# include <stdio.h> 

main()
{
	char sexo, casado;
	int casadosM, solteirosM, casadosH, solteirosH;
	int cont = 0;
	casadosM = casadosH = solteirosM = solteirosH = 0;
	
	while (cont < 10)
	{
		printf("Sexo (M/F): ");
		scanf(" %c", &sexo);
		printf("Casado? (S/N): ");
		scanf(" %c", &casado);
		
		if (sexo == 'M' || sexo == 'm') // homem
			if (casado == 'S' || casado == 's') //casado homem
				casadosH = casadosH + 1;
			else 
				solteirosH = solteirosH + 1;
		else // mulher
			if (casado == 'S' || casado == 's') //casado mulher
				casadosM = casadosM + 1;
			else
				solteirosM = solteirosM + 1;
	cont++;
	}// fim do while
	
	printf("\nQuantidades de homens casados:  %d", casadosH);
	printf("\nQuantidades de homens solteiros:  %d", solteirosH);
	printf("\nQuantidades de mulheres casadas:  %d", casadosM);
	printf("\nQuantidades de mulheres solteiras:  %d", solteirosM);
	
}// fim do programa

