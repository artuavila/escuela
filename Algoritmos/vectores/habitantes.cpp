#include<stdio.h>
float promedio, porc_quinientos, porcentaje;
int i, N=5, habitantes[5], total, comuna, cont, max, j, aux;

main()
{
	for(i = 0 ; i < N ; i++)
	{
		printf("Ingrese la cantidad de habitantes de la comuna N%d:", i+1);
		scanf("%d", &habitantes[i]);
		
		total = total + habitantes[i];
		
		if(habitantes[i] > 500)
		{
			cont = cont + 1;
		}
		
		if(habitantes[i] > max)
		{
			max = habitantes[i];
			comuna = i + 1;
		}
	}
	
		for(i = 0 ; i < N ; i++)
	{
		//porcentaje = (habitantes[i] * N) / 100;
		//printf("\n Porcentaje de habitantes Comuna N%d= %f", i + 1, porcentaje);
	}
	
	promedio = total / N;
	porc_quinientos = (cont * 100) / N;
	
	printf("\n Comuna con mayor cantidad de habitantes= %d", comuna);
	printf("\n Promedio= %f", promedio);
	printf("\n Porcentaje de habitantes mayores a 500= %f", porc_quinientos);
	
	for(j = 1 ; j < N ; j++)
	{
		for(i = 0 ; i < N-j ; i++)
		{
			if(habitantes[i] > habitantes[i + 1])
			{
				aux = habitantes[i];
				habitantes[i]= habitantes[i + 1];
				habitantes[i + 1] = aux;
			}
		}
	}
	
	for(i = 0 ; i < N ; i++)
	{
		printf("\n %d", habitantes[i]);
	}
	
}
